@interface SBHAppLibrarySettings : PTSettings

@property (nonatomic) unsigned long long minimumNumberOfIconsToShowSectionHeaderInDeweySearch;
@property (nonatomic) double criticalDismissalThresholdDurationFactor;
@property (nonatomic) double minimumVelocityForSwipeToDismiss;
@property (nonatomic) double minimumTranslationFractionForSwipeToDismiss;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
