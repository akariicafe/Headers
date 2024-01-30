@class NSArray, UIBlurEffect, _UIButtonBarButtonVisualProvider, _UIButtonBar, UIVisualEffectView, NSLayoutConstraint;

@interface _UIGroupedBar : UIView {
    _UIButtonBar *_leftBar;
    _UIButtonBar *_centerBar;
    _UIButtonBar *_rightBar;
    UIVisualEffectView *_backgroundView;
    NSLayoutConstraint *_centeringConstraint;
    NSLayoutConstraint *_leadingLimitConstraint;
    NSLayoutConstraint *_trailingLimitConstraint;
}

@property (copy, nonatomic) NSArray *leadingBarButtonGroups;
@property (copy, nonatomic) NSArray *centerBarButtonGroups;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups;
@property (nonatomic) BOOL independentGroupSizes;
@property (nonatomic) double margin;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic) double leadingBarSizeLimit;
@property (nonatomic) double trailingBarSizeLimit;
@property (copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_populateArchivedSubviews:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutMarginsDidChange;
- (void)_updateVisualProvider;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (id)_debug;
- (void)_setButtonAlpha:(double)a0;
- (void)_updateBarMargins;

@end
