@class UIColor, MPUTransportButtonEventHandler, NSString, UIImage, CALayer;

@interface MPUTransportButton : UIButton <MPUTransportButton> {
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
    CALayer *_selectionIndicatorLayer;
}

@property (retain, nonatomic) UIColor *regularColor;
@property (retain, nonatomic) UIColor *disabledColor;
@property (retain, nonatomic) UIColor *highlightedColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL shouldInferColorsFromTintColor;
@property (nonatomic) BOOL shouldShowBackgroundForSelectedState;
@property (retain, nonatomic) UIImage *transportButtonImage;
@property (readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) long long transportButtonImageViewContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transportButton;
+ (id)defaultRegularColor;
+ (id)defaultHighlightedColor;
+ (id)defaultDisabledColor;
+ (id)defaultSelectedColor;
+ (id)_stringForDisplayedSkipInterval:(double)a0;
+ (id)skipIntervalImageForInterval:(double)a0 baseImage:(id)a1 font:(id)a2 scale:(double)a3;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldTrack;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateDisabledTransportButtonImage;
- (void)_updateHighlightedTransportButtonImage;
- (void)_updateRegularTransportButtonImage;
- (void)_updateSelectedTransportButtonImage;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a0;
- (BOOL)wantsCustomHighlightAppearance;

@end
