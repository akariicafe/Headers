@class NSMutableData;
@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject {
    struct OpaqueAudioConverter { } *_opusConverter;
    NSMutableData *_bufferedLPCM;
    unsigned int _recordBasePacketsPerSecond;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    unsigned long long _lastTimestamp;
    unsigned long long _lastArrivalTimestampToAudioRecorder;
    float _outPacketSizeInSec;
}

@property (weak) id<CSAudioConverterDelegate> delegate;

+ (id)narrowBandOpusConverter;
+ (id)opusConverter;
+ (id)speexConverter;

- (void)flush;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithInASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter { } *)a0;
- (void)_convertBufferedLPCM:(id)a0 allowPartial:(BOOL)a1 timestamp:(unsigned long long)a2 arrivalTimestampToAudioRecorder:(unsigned long long)a3;
- (void)addSamples:(id)a0 timestamp:(unsigned long long)a1 arrivalTimestampToAudioRecorder:(unsigned long long)a2;

@end
