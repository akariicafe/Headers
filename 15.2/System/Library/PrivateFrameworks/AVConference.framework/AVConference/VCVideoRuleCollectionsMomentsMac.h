@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (unsigned char)getMomentsCapabilities;
- (id)initWithHardwareSettings:(id)a0;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;

@end
