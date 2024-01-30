@class UIView;

@interface LPIndeterminateProgressSpinnerView : LPComponentView {
    UIView *_platformView;
}

- (void).cxx_destruct;
- (void)layoutComponentView;
- (void)ensurePlatformView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
