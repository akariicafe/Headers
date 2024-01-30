@class UIFont, NSString, UIColor, UIImage, MPRouteLabel, MPAVRoute, UIImageView;

@interface MPRouteButton : UIControl {
    MPRouteLabel *_routeLabel;
    UIImageView *_accessoryImageView;
    double _alphaOverride;
}

@property (retain, nonatomic) UIImage *accessoryImage;
@property (nonatomic) double accessoryImageSpacing;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (retain, nonatomic) MPAVRoute *route;
@property (readonly, copy, nonatomic) NSString *routeTitle;
@property (nonatomic, getter=isRouteLabelHidden) BOOL routeLabelHidden;
@property (nonatomic) BOOL forcesUppercaseText;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic) long long routeLabelAxis;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
