@interface _UIPointerEffectSizeRuleSettings : PTSettings

@property (nonatomic) double explicitRequestMultiplier;
@property (nonatomic) double genericSizeRuleThreshold;
@property (nonatomic) double narrowAspectRuleMinorDimensionThreshold;
@property (nonatomic) double narrowAspectRuleMajorDimensionThreshold;
@property (nonatomic) double pointerSizeRuleMinorDimensionThreshold;
@property (nonatomic) double pointerSizeRuleMajorDimensionThreshold;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
