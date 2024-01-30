@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {
    UIImageView *_warningIconView;
}

- (id)_titleFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_subtitleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_titleBaseline;
- (double)_subtitleBaseline;
- (double)_iconYPosition;

@end
