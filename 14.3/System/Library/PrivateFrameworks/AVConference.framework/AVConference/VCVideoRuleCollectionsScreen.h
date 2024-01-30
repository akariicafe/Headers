@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (BOOL)setupH264Rules;
- (id)initWithHardwareSettings:(id)a0;
- (void)selectPreferredRule:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)setupMacDecodingOnlyRules;
- (id)initForMacDecodingOnly;

@end
