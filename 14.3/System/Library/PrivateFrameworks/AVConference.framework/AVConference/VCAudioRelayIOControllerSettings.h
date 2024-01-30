@interface VCAudioRelayIOControllerSettings : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioFormat;
    struct _VCRemoteCodecInfo { unsigned int codecType; double sampleRate; } _remoteCodecInfo;
}

@property (readonly, nonatomic) const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *audioFormat;
@property (readonly, nonatomic) const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *remoteCodecInfo;
@property (readonly, nonatomic) unsigned int samplesPerFrame;

- (id)initWithAudioFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 remoteCodecInfo:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a1;

@end
