@class VCAudioUnitSpatialContext;

@interface VCAudioUnitProperties : NSObject {
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _frameFormatMic;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _frameFormatSpeaker;
    struct VoiceIOFarEndVersionInfo { unsigned char farEndHwModel[64]; unsigned char farEndOSVersion[64]; unsigned int farEndAUVersion; } _farEndVersionInfo;
}

@property (readonly, nonatomic) struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *frameFormatMic;
@property (readonly, nonatomic) struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *frameFormatSpeaker;
@property (nonatomic) unsigned int audioUnitType;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) int operatingMode;
@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned int vpOperatingMode;
@property (nonatomic) BOOL vpEnableSpatialChat;
@property (readonly, nonatomic) BOOL isFarEndVersionInfoValid;
@property (nonatomic) struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; } farEndVersionInfo;
@property (nonatomic) unsigned int remoteCodecType;
@property (nonatomic) double remoteCodecSampleRate;
@property (nonatomic) BOOL enableDNNVAD;
@property (retain, nonatomic) VCAudioUnitSpatialContext *spatialContext;
@property (nonatomic) unsigned int audioSessionId;

- (id)description;
- (void)dealloc;

@end
