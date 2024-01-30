@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {
    unsigned int _encodeScore;
    unsigned int _decodeScore;
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (BOOL)useSoftFramerateSwitching;
- (void)dealloc;
- (double)preferredAspectRatio;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (id)initWithHardwareSettings:(id)a0;
- (void)computeEncodingScore;
- (void)computeDecodingScore;
- (BOOL)setupH264WifiRules;
- (BOOL)setUp1080pRules:(int)a0;
- (void)_removeRulesGreaterThanVGA;
- (void)_addWVGAEncodingRules;
- (void)_removeRulesGreaterThan720p;
- (void)_resetJ92EncodingRulesForCameraIsHD:(BOOL)a0 isWVGA:(BOOL)a1 is1080:(BOOL)a2;
- (void)resetEncodingRulesForCameraIsHD:(BOOL)a0 isWVGA:(BOOL)a1 is1080:(BOOL)a2;

@end
