@class UIStatusBarStyleRequest, UIStatusBar_Modern;
@protocol CCUIStatusBarDelegate;

@interface CCUIStatusBar : UIView {
    UIStatusBar_Modern *_compactTrailingStatusBar;
    UIStatusBar_Modern *_expandedStatusBar;
    BOOL _needsUpdatedMetrics;
    double _trailingMarginDelta;
    double _verticalBatteryAlignmentDelta;
}

@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *compactTrailingStyleRequest;
@property (readonly, nonatomic) double maxCompactScaleFactor;
@property (readonly, nonatomic) double verticalSecondaryServiceDelta;
@property (weak, nonatomic) id<CCUIStatusBarDelegate> delegate;
@property (nonatomic) unsigned long long leadingState;
@property (nonatomic) unsigned long long trailingState;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } compactEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandedEdgeInsets;
@property (nonatomic) double leadingAlpha;
@property (nonatomic) double compactTrailingAlpha;
@property (nonatomic) double expandedTrailingAlpha;
@property (nonatomic) double expandedStatusBarTranslation;
@property (nonatomic) BOOL alignCompactAndExpandedStatusBars;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } compactScaleTransform;

- (void)_updateShadow;
- (void)setExpandedTrailingAlpha:(double)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)prepareForPresentation;
- (void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
- (void)setLeadingAlpha:(double)a0;
- (double)compactTrailingAlpha;
- (long long)orientation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)compactTrailingStyleRequest;
- (double)expandedTrailingAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })compactAvoidanceFrame;
- (void)_updateMetricsIfNeeded;
- (void)controlCenterApplyPrimaryContentShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOrientation:(long long)a0;
- (double)leadingAlpha;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setCompactTrailingAlpha:(double)a0;

@end
