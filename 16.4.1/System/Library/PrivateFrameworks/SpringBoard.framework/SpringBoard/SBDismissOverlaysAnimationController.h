@class SBWorkspaceTransitionRequest;

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {
    SBWorkspaceTransitionRequest *_transitionRequest;
}

@property (readonly, nonatomic) unsigned long long dismissOptions;

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)a0;
+ (BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)a0;

- (id)initWithTransitionContextProvider:(id)a0;
- (void)_startAnimation;
- (id)animationSettings;
- (BOOL)_canBeInterrupted;
- (void).cxx_destruct;
- (id)initWithTransitionContextProvider:(id)a0 options:(unsigned long long)a1;

@end
