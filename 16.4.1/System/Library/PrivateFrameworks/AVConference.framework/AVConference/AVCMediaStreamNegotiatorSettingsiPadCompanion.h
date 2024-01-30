@class NSArray, NSMutableSet;

@interface AVCMediaStreamNegotiatorSettingsiPadCompanion : AVCMediaStreamNegotiatorSettings {
    NSArray *_hdrModePixelFormats;
    NSMutableSet *_hdrModesSupported;
}

- (void)dealloc;
- (int)operatingMode;
- (long long)tilesPerFrame;
- (long long)videoStreamMode;
- (long long)captureSource;
- (id)hdrModePixelFormats;
- (id)hdrModesSupported;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
