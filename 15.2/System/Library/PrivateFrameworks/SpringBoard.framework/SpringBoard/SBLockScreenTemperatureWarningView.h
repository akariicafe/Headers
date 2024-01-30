@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {
    UIImageView *_warningIconView;
}

- (void)layoutSubviews;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_statusBarOrientationIsPortrait;
- (double)_titleBaseline;
- (double)_subtitleBaseline;
- (double)_iconYPosition;

@end
