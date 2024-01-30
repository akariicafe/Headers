@class UIImageView, UIView;

@interface _FCUIBannerDeactivateControl : UIControl {
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
}

- (void)layoutSubviews;
- (void)mt_applyVisualStyling:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)mt_removeAllVisualStyling;

@end
