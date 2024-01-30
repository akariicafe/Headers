@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;
- (id)initWithHardwareSettings:(id)a0;
- (BOOL)isSupportedChipID;
- (BOOL)isSupportedDeviceClass;

@end
