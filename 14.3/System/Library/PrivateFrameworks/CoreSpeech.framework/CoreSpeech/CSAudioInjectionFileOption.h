@class NSURL;

@interface CSAudioInjectionFileOption : NSObject

@property (readonly, nonatomic) NSURL *audioURL;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } outASBD;
@property (nonatomic) struct OpaqueExtAudioFile { } *fFile;
@property (readonly, nonatomic) float scaleFactor;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAudioURL:(id)a0 withScaleFactor:(float)a1 outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2;

@end
