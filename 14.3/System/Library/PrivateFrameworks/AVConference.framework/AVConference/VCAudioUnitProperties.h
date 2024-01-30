@interface VCAudioUnitProperties : NSObject {
    struct VoiceIOFarEndVersionInfo { unsigned char farEndHwModel[64]; unsigned char farEndOSVersion[64]; unsigned int farEndAUVersion; } _farEndVersionInfo;
}

@property (nonatomic) unsigned int samplesPerFrame;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format;
@property (nonatomic) unsigned int audioUnitType;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) int operatingMode;
@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned int vpOperatingMode;
@property (readonly, nonatomic) BOOL isFarEndVersionInfoValid;
@property (nonatomic) struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; } farEndVersionInfo;
@property (nonatomic) unsigned int remoteCodecType;
@property (nonatomic) double remoteCodecSampleRate;
@property (nonatomic) BOOL enableDNNVAD;

- (id)description;

@end
