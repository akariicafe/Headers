@class NSString, NSMutableData;

@interface CannedAudioInjector : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _samplesMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _samplesConditional;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _internalFormat;
}

@property (retain, nonatomic) NSString *cannedMoviePath;
@property (retain, nonatomic) NSMutableData *samples;
@property (nonatomic) int position;
@property (nonatomic) BOOL fromBeginning;

+ (BOOL)isAudioAvailable:(id)a0;

- (void)dealloc;
- (int)readRawAudioSamples;
- (int)decodeAudio;
- (id)initWithPath:(id)a0 withDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 fromBeginning:(BOOL)a2;
- (void)injectToBuffer:(char *)a0 size:(int)a1 time:(double)a2 muted:(BOOL)a3;

@end
