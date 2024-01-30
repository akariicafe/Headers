@interface PUWallpaperPlaygroundSettings : PXSettings

@property (nonatomic) BOOL applyLowAPLFilter;
@property (nonatomic) double lowAPLFilterAmount;
@property (nonatomic) double lowLuminanceTransformAnimationDuration;
@property (nonatomic) double lowLuminanceAlphaAnimationDuration;
@property (nonatomic) double shuffleSleepTransformOutAnimationDuration;
@property (nonatomic) double shuffleSleepFadeOutAnimationDuration;
@property (nonatomic) double shuffleSleepFadeInAnimationDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
