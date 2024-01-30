@interface PUCompositeVideoSettings : PXSettings

@property (nonatomic) BOOL useFrameBlending;
@property (nonatomic) long long cropMode;
@property (nonatomic) double stitchingFadeDuration;
@property (nonatomic) double nonStitchingFadeDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
