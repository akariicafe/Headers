@class UIView, NSLayoutConstraint;

@interface UISearchDisplayControllerContainerView : UIView {
    BOOL _collapsedTopView;
}

@property (retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint;
@property (readonly, nonatomic) UIView *topView;
@property (readonly, nonatomic) UIView *bottomView;
@property (readonly, nonatomic) UIView *behindView;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void).cxx_destruct;
- (void)collapseTopView;
- (void)adjustTopAttributeConstantByDelta:(double)a0;
- (void)configureInteractionForContainment:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topViewHeight:(double)a1;
- (void)setBottomViewUserInteractionEnabled:(BOOL)a0;
- (void)updateTopAttributeConstant:(double)a0;
- (void)updateTopViewHeight:(double)a0;
- (void)updateTopViewHeight:(double)a0 animateUpdate:(BOOL)a1;

@end
