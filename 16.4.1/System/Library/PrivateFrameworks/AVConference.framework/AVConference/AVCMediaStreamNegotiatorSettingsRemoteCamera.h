@interface AVCMediaStreamNegotiatorSettingsRemoteCamera : AVCMediaStreamNegotiatorSettings {
    long long _captureSource;
}

+ (BOOL)isOfferSupported;

- (int)operatingMode;
- (long long)tilesPerFrame;
- (unsigned long long)minBandwidth;
- (long long)videoStreamMode;
- (long long)captureSource;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
