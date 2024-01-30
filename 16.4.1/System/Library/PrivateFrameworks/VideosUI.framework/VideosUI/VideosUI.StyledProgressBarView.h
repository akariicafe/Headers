@interface VideosUI.StyledProgressBarView : VUIBaseView {
    void /* unknown type, empty encoding */ progressBarView;
    void /* unknown type, empty encoding */ shadowImageView;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ progressTintColor;
    void /* unknown type, empty encoding */ gradientStartColor;
    void /* unknown type, empty encoding */ gradientEndColor;
    void /* unknown type, empty encoding */ completeTintColor;
    void /* unknown type, empty encoding */ shouldProgressBarUseRoundCorner;
    void /* unknown type, empty encoding */ padding;
}

@property (nonatomic, readonly) double accessibilityProgress;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;

@end
