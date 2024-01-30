@interface TeaUI.DownloadButton : TeaUI.TouchInsetsButton {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ imageTintColor;
    void /* unknown type, empty encoding */ progressTintColor;
    void /* unknown type, empty encoding */ trackTintColor;
    void /* unknown type, empty encoding */ downloadingImage;
    void /* unknown type, empty encoding */ notDownloadingImage;
    void /* unknown type, empty encoding */ progressBackgroundLayer;
    void /* unknown type, empty encoding */ progressLayer;
    void /* unknown type, empty encoding */ buttonState;
    void /* unknown type, empty encoding */ downloadProgressDisposable;
    void /* unknown type, empty encoding */ downloadStateDisposable;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (void)startingButtonTappedWithSender:(id)a0;

@end
