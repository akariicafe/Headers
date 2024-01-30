@class _UILegibilitySettings, CSMagSafeAccessoryConfiguration;

@interface CSMagSafeAccessoryView : CSCoverSheetViewBase

@property (retain, nonatomic) CSMagSafeAccessoryConfiguration *configuration;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) double animationDurationBeforeDismissal;

- (BOOL)isReduceMotionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)layoutSubviews;
- (BOOL)isReduceTransparencyEnabled;
- (void).cxx_destruct;

@end
