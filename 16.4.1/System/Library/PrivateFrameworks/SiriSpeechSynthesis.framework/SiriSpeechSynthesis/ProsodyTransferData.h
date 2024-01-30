@class NSData, NSString, UserVoiceProfile;

@interface ProsodyTransferData : NSObject

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (retain, nonatomic) NSData *waveData;
@property (retain, nonatomic) UserVoiceProfile *userVoiceProfile;
@property (retain, nonatomic) NSString *userVoiceProfileUrl;

- (id)init;
- (void).cxx_destruct;

@end
