@class UIViewPropertyAnimator, UIView;
@protocol HUDashboardScrollingAnimationControllerDelegate;

@interface HUDashboardScrollingAnimationController : NSObject

@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (nonatomic) unsigned long long visibilityState;
@property (weak, nonatomic) id<HUDashboardScrollingAnimationControllerDelegate> delegate;
@property (retain, nonatomic) UIView *animatingView;
@property (nonatomic) double minimumMargin;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateWithCurrentMargin:(double)a0 animated:(BOOL)a1;

@end
