@interface SBSystemNotesSwipeMetricSettings : PTSettings

@property (nonatomic) double panDistanceBeforeScaling;
@property (nonatomic) double panInitialThumbnailScale;
@property (nonatomic) double panDistancePer1xScaling;
@property (nonatomic) double scaleThresholdBeforeFullSize;
@property (nonatomic) double flickVelocityThreshold;
@property (nonatomic) double cornerDistanceBeforeScalingForDismiss;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
