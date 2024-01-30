@class UIColor, NSAttributedString, _UIRefreshControlContentView;
@protocol _UIRefreshControlHosting;

@interface UIRefreshControl : UIControl {
    long long _style;
    _UIRefreshControlContentView *_contentView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _appliedInsets;
    id<_UIRefreshControlHosting> _host;
}

@property (readonly, nonatomic) long long refreshControlState;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) double _refreshControlHeight;
@property (readonly, nonatomic) double _snappingHeight;
@property (readonly, nonatomic) double _visibleHeight;
@property (readonly, nonatomic) BOOL _hostAdjustsContentOffset;
@property (readonly, nonatomic) BOOL _areInsetsBeingApplied;
@property (readonly, nonatomic, getter=_appliedInsets) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } appliedInsets;
@property (weak, nonatomic, getter=_host, setter=_setHost:) id<_UIRefreshControlHosting> _host;
@property (readonly, nonatomic, getter=isRefreshing) BOOL refreshing;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;

+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;
+ (id)_defaultColor;
+ (Class)_contentViewClassForStyle:(long long)a0;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;

- (void)_setTintColor:(id)a0;
- (void)_setAttributedTitle:(id)a0;
- (void)endRefreshing;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x0; double x1; })a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_resizeToFitContents;
- (void)_removeInsetHeight:(double)a0;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)a0;
- (void)beginRefreshing;
- (id)_attributedTitle;
- (double)revealedFraction;
- (id)_tintColor;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_removeInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setVisibleHeight:(double)a0;
- (void)_endRefreshingAnimated:(BOOL)a0;
- (void)setRefreshControlState:(long long)a0;
- (void)_addInsets;
- (void)_populateArchivedSubviews:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)_setRefreshControlState:(long long)a0 notify:(BOOL)a1;
- (id)init;
- (void)_addInsetHeight:(double)a0;
- (double)_stiffnessForVelocity:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateConcealingMask;
- (void)_didScroll;
- (double)_scrollViewHeight;
- (double)_impactIntensityForVelocity:(double)a0;
- (void)_update;
- (void)_updateSnappingHeight;
- (id)_contentView;
- (struct CGPoint { double x0; double x1; })_originForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)_updateHiddenStateIfNeeded;
- (void)sizeToFit;
- (id)_scrollView;
- (BOOL)_isApplyingInsets;
- (long long)_recomputeNewState;

@end
