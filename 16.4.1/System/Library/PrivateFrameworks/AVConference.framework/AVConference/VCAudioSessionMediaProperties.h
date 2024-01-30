@interface VCAudioSessionMediaProperties : NSObject

@property (nonatomic) double preferredSampleRate;
@property (nonatomic) double preferredBlockSize;
@property (nonatomic) int operatingMode;
@property (nonatomic) unsigned int vpOperatingMode;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } inputFormat;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } outputFormat;
@property (nonatomic) int processId;
@property (nonatomic, getter=isSessionActive) BOOL sessionActive;

- (BOOL)isEqual:(id)a0;
- (id)description;

@end
