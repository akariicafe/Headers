@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (id)initWithHardwareSettings:(id)a0;
- (unsigned int)tilesPerFrame:(int)a0;
- (void)selectPreferredRule:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;

@end
