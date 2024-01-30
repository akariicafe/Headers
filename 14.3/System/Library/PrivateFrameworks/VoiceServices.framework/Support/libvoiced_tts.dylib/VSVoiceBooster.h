@interface VSVoiceBooster : NSObject

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) unsigned long long pcmBufferSize;
@property (nonatomic) struct OpaqueAudioConverter { } *floatConverter;
@property (nonatomic) struct OpaqueAudioConverter { } *integerConverter;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *voiceBoostUnit;
@property (nonatomic) struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } audioTimeStamp;
@property (nonatomic) float voiceBoostGainDecibels;

- (BOOL)initialize;
- (id)processData:(id)a0;
- (void)dealloc;
- (void)uninitialize;
- (id)initWithStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 pcmBufferSize:(unsigned long long)a1;

@end
