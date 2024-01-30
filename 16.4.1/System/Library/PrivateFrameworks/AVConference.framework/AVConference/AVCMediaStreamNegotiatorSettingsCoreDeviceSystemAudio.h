@interface AVCMediaStreamNegotiatorSettingsCoreDeviceSystemAudio : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
    long long _accessNetworkType;
}

- (int)operatingMode;
- (long long)accessNetworkType;
- (unsigned long long)ptime;
- (long long)audioStreamMode;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;

@end
