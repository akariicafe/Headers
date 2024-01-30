@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsScreenAirplayMac : VCVideoRuleCollectionsScreenAirplay {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (id)initWithHardwareSettings:(id)a0;
- (unsigned int)tilesPerFrame:(int)a0 hdrMode:(unsigned long long)a1;

@end
