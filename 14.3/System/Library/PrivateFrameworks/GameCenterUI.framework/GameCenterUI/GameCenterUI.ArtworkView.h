@class UIColor;

@interface GameCenterUI.ArtworkView : GameCenterUI.RoundedCornerView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ shadow;
    void /* unknown type, empty encoding */ isStyleInvalid;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ internalBackgroundColor;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ isCornerRadiusInvalid;
    void /* unknown type, empty encoding */ artworkTintColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
