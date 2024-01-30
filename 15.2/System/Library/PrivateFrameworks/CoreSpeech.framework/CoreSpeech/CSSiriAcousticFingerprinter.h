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

- (void)flush;
- (id)_connection;
- (void)_cleanUpConnection;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)init;
- (void)dealloc;
- (id)_service;
- (void)reset;
- (id)_serviceWithErrorHandler:(id /* block */)a0;
- (void)setASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (unsigned long long)_samplesPerInterval;
- (void)_configureWithCurrentASBD;
- (BOOL)_needsConversion;
- (id)_convertPCMDataForFingerprinting:(id)a0;
- (void)setFingerprintInterval:(double)a0;
- (void)appendPCMData:(id)a0;

@end
