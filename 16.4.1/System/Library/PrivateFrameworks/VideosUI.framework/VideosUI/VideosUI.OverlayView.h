@class VUILabel;

@interface VideosUI.OverlayView : VUIBaseView {
    void /* unknown type, empty encoding */ hasPageControlDisplayedOnTop;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ badgeViewWrappers;
    void /* unknown type, empty encoding */ overlayType;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ textBadge;
    void /* unknown type, empty encoding */ progressView;
}

@property (nonatomic, readonly) BOOL vuiDebugUI;
@property (nonatomic, readonly) VUILabel *accessibilityTitleLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
