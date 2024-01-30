@interface SBDismissOverlaysAnimationController : SBUIAnimationController

@property (readonly, nonatomic) unsigned long long dismissOptions;

+ (BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)a0;
+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)a0;

- (id)animationSettings;
- (void)_startAnimation;
- (BOOL)_canBeInterrupted;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 options:(unsigned long long)a1;

@end
