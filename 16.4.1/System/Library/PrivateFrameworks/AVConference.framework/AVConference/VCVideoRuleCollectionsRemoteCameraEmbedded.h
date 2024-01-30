@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsRemoteCameraEmbedded : VCVideoRuleCollectionsRemoteCamera {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (BOOL)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;

@end
