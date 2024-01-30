@class UIFont, NSString, UIImage, NSArray, MPAVRoute, MPRouteLabel, UIImageView, UIImageSymbolConfiguration, UIColor;

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
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) long long routeLabelAxis;
@property (readonly, nonatomic) NSArray *contentViews;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateAccessoryIcon;
- (void)routeDidChangeNotification:(id)a0;

@end
