@protocol SBUIFullscreenAnimationViewDelegate;

@interface SBUIFullscreenAnimationView : UIView

@property (weak, nonatomic) id<SBUIFullscreenAnimationViewDelegate> delegate;
@property (readonly, nonatomic) BOOL animating;

- (void).cxx_destruct;
- (void)beginTransition;
- (void)endTransition;
- (void)setToView:(id)a0;
- (void)_animationEnded;
- (void)setFromView:(id)a0;
- (void)_animationBegan;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)a0 delay:(double)a1;
- (void)_notifyDelegateThatAnimationIsDone;

@end
