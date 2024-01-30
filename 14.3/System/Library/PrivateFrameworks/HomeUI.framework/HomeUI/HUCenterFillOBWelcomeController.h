@class NSLayoutConstraint, UIView;

@interface HUCenterFillOBWelcomeController : OBWelcomeFullCenterContentController

@property (readonly, nonatomic) UIView *contentViewContainer;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint;
@property (readonly, nonatomic) UIView *centerFillContentView;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (double)_contentAspectRatio;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentView:(id)a3;
- (void)_viewDidUpdateContent;
- (void)_updateContentViewContainerConstraints;
- (void)_updateContentViewInsetConstraints;
- (BOOL)_limitToNonScrollingContentHeight;

@end
