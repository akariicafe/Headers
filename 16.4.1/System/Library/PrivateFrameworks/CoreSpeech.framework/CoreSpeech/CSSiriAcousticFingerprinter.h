@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, CSSiriAcousticFingerprinterDelegate;

@interface CSSiriAcousticFingerprinter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_asxConnection;
    unsigned long long _totalSampleCount;
    unsigned long long _nextFingerprintSampleNumber;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _sourceASBD;
    double _interval;
    struct OpaqueAudioConverter { } *_fingerprinterConverter;
}

@property (weak, nonatomic) id<CSSiriAcousticFingerprinterDelegate> delegate;

- (void)_connectionInterrupted;
- (id)_service;
- (void)flush;
- (id)_serviceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)_connectionInvalidated;
- (id)_connection;
- (void).cxx_destruct;
- (void)reset;
- (void)_cleanUpConnection;
- (void)_configureWithCurrentASBD;
- (id)_convertPCMDataForFingerprinting:(id)a0;
- (BOOL)_needsConversion;
- (unsigned long long)_samplesPerInterval;
- (void)appendPCMData:(id)a0;
- (void)setASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)setFingerprintInterval:(double)a0;

@end
