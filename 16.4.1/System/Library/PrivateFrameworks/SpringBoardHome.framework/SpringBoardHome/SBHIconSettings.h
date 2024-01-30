@class SBFParallaxSettings;

@interface SBHIconSettings : PTSettings

@property (nonatomic) BOOL suppressJitter;
@property (nonatomic) BOOL alwaysHitTestNearestIcon;
@property (nonatomic) double iconHitboxPaddingX;
@property (nonatomic) double iconHitboxPaddingY;
@property (retain, nonatomic) SBFParallaxSettings *iconParallaxSettings;
@property (retain, nonatomic) SBFParallaxSettings *badgeParallaxSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
