@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (int)getMomentsCapabilities;
- (id)initWithHardwareSettings:(id)a0;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;
- (BOOL)isSupportedDeviceClass;
- (BOOL)isSupportedChipID;

@end
