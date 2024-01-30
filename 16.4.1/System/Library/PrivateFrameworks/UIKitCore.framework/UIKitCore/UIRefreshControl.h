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

+ (id)_defaultColor;
+ (Class)_contentViewClassForStyle:(long long)a0;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;

- (void)_didScroll;
- (void)_updateHiddenStateIfNeeded;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_contentView;
- (void)sizeToFit;
- (void)encodeWithCoder:(id)a0;
- (void)_addInsets;
- (void)_setTintColor:(id)a0;
- (id)_tintColor;
- (id)initWithCoder:(id)a0;
- (void)beginRefreshing;
- (void)_populateArchivedSubviews:(id)a0;
- (void)_resizeToFitContents;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_update;
- (void)_updateConcealingMask;
- (void)_setVisibleHeight:(double)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_recomputeNewState;
- (void)_updateSnappingHeight;
- (struct CGPoint { double x0; double x1; })_originForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setRefreshControlState:(long long)a0;
- (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
- (id)_scrollView;
- (id)_attributedTitle;
- (double)revealedFraction;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addInsetHeight:(double)a0;
- (BOOL)_isApplyingInsets;
- (void)didMoveToSuperview;
- (double)_stiffnessForVelocity:(double)a0;
- (void)_removeInsets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x0; double x1; })a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (double)_impactIntensityForVelocity:(double)a0;
- (void)_setAttributedTitle:(id)a0;
- (void)_removeInsetHeight:(double)a0;
- (id)init;
- (double)_scrollViewHeight;
- (void)endRefreshing;
- (void)_setRefreshControlState:(long long)a0 notify:(BOOL)a1;
- (void).cxx_destruct;
- (void)_endRefreshingAnimated:(BOOL)a0;

@end
