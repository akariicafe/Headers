@class CSAccessoryConfiguration, _UILegibilitySettings;

@interface CSAccessoryView : CSCoverSheetViewBase

@property (readonly, nonatomic) CSAccessoryConfiguration *configuration;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) double animationDurationBeforeDismissal;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isReduceMotionEnabled;
- (BOOL)isReduceTransparencyEnabled;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
