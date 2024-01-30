@interface SBDismissOverlaysAnimationController : SBUIAnimationController

@property (readonly, nonatomic) unsigned long long dismissOptions;

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)a0;
+ (BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)a0;

- (BOOL)_canBeInterrupted;
- (id)animationSettings;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 options:(unsigned long long)a1;

@end
