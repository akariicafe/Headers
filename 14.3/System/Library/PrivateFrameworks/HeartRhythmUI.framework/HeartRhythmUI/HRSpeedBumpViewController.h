@class NSLayoutConstraint, NSArray, HRSpeedBumpItem, NSString, UILabel, UIView, HRStackedButtonView;

@interface HRSpeedBumpViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UIScrollViewDelegate>

@property (nonatomic) UIView *latestVisibleBubbleView;
@property (nonatomic) BOOL stateAnimating;
@property (nonatomic) double initialContentOffset;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) NSArray *bubbleViews;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) HRSpeedBumpItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bodyFont;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpStackedButtonView;
- (void)_setUpTitleConstraints;
- (double)_titleLastBaselineToBodyTop;
- (id)initWithSpeedBumpItem:(id)a0 onboarding:(BOOL)a1 upgradingFromAlgorithmVersion:(long long)a2;
- (void)_setUpTitleLabel;
- (void)_setUpBodyLabel;
- (void)_setUpBubbleViews;
- (void)_setUpBodyConstraints;
- (void)_setUpBubbleViewConstraints;
- (void)_updateContentViewBottomConstraintWithAnchor:(id)a0 constant:(double)a1;
- (void)_updateUIWithLatestVisibleBubbleView:(id)a0 animated:(BOOL)a1;
- (void)_scrollBubbleViewToVisible:(id)a0;

@end
