@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsRemoteCameraMac : VCVideoRuleCollectionsRemoteCamera {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (BOOL)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;

@end
