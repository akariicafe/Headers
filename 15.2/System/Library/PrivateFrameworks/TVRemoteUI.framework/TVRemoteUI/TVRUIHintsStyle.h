@interface TVRUIHintsStyle : NSObject

@property (nonatomic) BOOL hasHomeButton;

+ (id)styleProviderForUserInterfaceIdiom:(long long)a0 hasHomeButton:(BOOL)a1;

- (long long)userInterfaceStyle;
- (double)animationDuration;
- (double)animationPresentationDelay;
- (BOOL)shouldShowSiriHint;
- (BOOL)shouldShowVolumeHint;
- (id)siriHintTipContext;
- (double)preferredTipWidth;
- (id)initWithHomeButton:(BOOL)a0;
- (double)maximumSymbolPointSize;

@end
