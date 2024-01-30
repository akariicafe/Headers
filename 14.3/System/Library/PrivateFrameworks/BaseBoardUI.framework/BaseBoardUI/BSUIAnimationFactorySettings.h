@interface BSUIAnimationFactorySettings : PTSettings

@property (nonatomic) BOOL slowAnimations;
@property (nonatomic) double slowDownFactor;

+ (id)settingsControllerModule;

- (double)effectiveSlowDownFactor;
- (void)setDefaultValues;

@end
