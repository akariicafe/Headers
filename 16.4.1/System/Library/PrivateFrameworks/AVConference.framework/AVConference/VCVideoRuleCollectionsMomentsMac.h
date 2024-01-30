@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;
- (id)initWithHardwareSettings:(id)a0;

@end
