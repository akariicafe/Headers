@interface PUCompositeVideoSettings : PXSettings

@property (nonatomic) BOOL useFrameBlending;
@property (nonatomic) long long cropMode;
@property (nonatomic) double stitchingFadeDuration;
@property (nonatomic) double nonStitchingFadeDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
