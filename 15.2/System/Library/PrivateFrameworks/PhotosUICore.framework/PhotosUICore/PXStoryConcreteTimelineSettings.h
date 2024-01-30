@interface PXStoryConcreteTimelineSettings : PXSettings

@property (nonatomic) double kenBurnsPanSpeed;
@property (nonatomic) double kenBurnsScaleSpeed;
@property (nonatomic) double kenBurnsRotationSpeed;
@property (nonatomic) double kenBurnsScaleSpeedDuringRotation;
@property (nonatomic) long long initialProductionCountLimit;
@property (nonatomic) double initialProductionTimeLimit;
@property (nonatomic) long long rotationInitialProductionCountLimit;
@property (nonatomic) double rotationInitialProductionTimeLimit;
@property (nonatomic) double subsequentProductionTimeLimit;
@property (nonatomic) long long largeAssetCount;
@property (nonatomic) long long largeProductionLimit;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
