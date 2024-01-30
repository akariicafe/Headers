@interface SBSystemNotesSwipeMetricSettings : PTSettings

@property (nonatomic) double panDistanceBeforeScaling;
@property (nonatomic) double panInitialThumbnailScale;
@property (nonatomic) double panDistancePer1xScaling;
@property (nonatomic) double scaleThresholdBeforeFullSize;
@property (nonatomic) double flickVelocityThreshold;
@property (nonatomic) double cornerDistanceBeforeScalingForDismiss;

+ (id)settingsControllerModule;
+ (BOOL)ignoresKey:(id)a0;

- (void)setDefaultValues;

@end
