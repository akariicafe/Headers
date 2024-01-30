@class HUCCModuleExpandingTransition, UILayoutGuide, HUCCHomeButton, NAUILayoutConstraintSet, UIView, HUPillButton, UILabel;
@protocol HUCCModuleViewDelegate;

@interface HUCCModuleView : UIView

@property (readonly, nonatomic) HUCCHomeButton *collapsedHomeButton;
@property (readonly, nonatomic) HUCCHomeButton *expandedHomeButton;
@property (readonly, nonatomic) UILayoutGuide *transformingExpandedHomeButtonLayoutGuide;
@property (readonly, nonatomic) UIView *transformingContentContainerView;
@property (retain, nonatomic) NAUILayoutConstraintSet *homeButtonTrackingConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *homeButtonPositioningConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *expandedContentViewConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *expandedChromeConstraintSet;
@property (retain, nonatomic) HUCCModuleExpandingTransition *activeTransition;
@property (nonatomic) struct { unsigned long long sizeSubclass; struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets; double innerContentTopToTitleBaselineDistance; double titleBaselineToContentTopDistance; } layoutMetrics;
@property (weak, nonatomic) id<HUCCModuleViewDelegate> delegate;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) HUPillButton *pageSwitchButton;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long layoutStyle;

+ (BOOL)requiresConstraintBasedLayout;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })expandedContentInsetsForModuleWidth:(double)a0;
+ (double)preferredExpandedHeightForContentHeight:(double)a0 moduleWidth:(double)a1;

- (void)layoutMarginsDidChange;
- (void)_updateFonts;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)expandedStateTransitionWithNewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_homeButtonPressed:(id)a0;
- (void)_updateLayoutMetricsForFirstLayout:(BOOL)a0;
- (void)_buildConstraintSets;
- (void)_updateContentAppearanceForExpandedState;
- (void)_invalidateSizeDependentConstraints;
- (void)_updateTransformingContentContainerLayout;
- (void)_updateContentViewVisibilityForExpandedState;
- (id)_sizeDependentConstraintSets;
- (id)_allConstraintSets;

@end
