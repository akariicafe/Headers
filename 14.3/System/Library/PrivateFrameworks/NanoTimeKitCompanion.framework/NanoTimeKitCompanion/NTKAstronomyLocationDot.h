@class UIColor, UIImageView, UIView, CLKDevice;

@interface NTKAstronomyLocationDot : UIView {
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *outerDotColor;
@property (nonatomic) double outerDotDiameter;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (nonatomic) double innerDotDiameter;
@property (nonatomic) double pulseDuration;
@property (nonatomic) double pulseAlphaDelay;
@property (nonatomic) BOOL animating;

+ (id)_defaultColor;
+ (struct CGSize { double x0; double x1; })_defaultSize;
+ (double)_defaultOuterDotDiameterForSizeClass:(unsigned long long)a0;
+ (double)_defaultInnerDotDiameterForSizeClass:(unsigned long long)a0;
+ (double)defaultPulseDuration;
+ (double)defaultPulseAlphaDelay;

- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)startAnimation;
- (id)initForDevice:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)_generateInnerDotImage;

@end
