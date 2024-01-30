@class UIView, UIColor, CAShapeLayer;

@interface HUQuickControlSliderValueOverlayView : UIView

@property (readonly, nonatomic) CAShapeLayer *layer;
@property (retain, nonatomic) CAShapeLayer *primaryGrabberShadowLayer;
@property (weak, nonatomic) CAShapeLayer *secondaryGrabberShadowLayer;
@property (retain, nonatomic) UIView *topBorder;
@property (nonatomic, getter=isOff) BOOL off;
@property (nonatomic) BOOL hasSecondGrabber;
@property (nonatomic) BOOL showGrabbers;
@property (nonatomic) unsigned long long primaryGrabberLocation;
@property (nonatomic) unsigned long long controlSize;
@property (retain, nonatomic) UIColor *layerColor;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateShape;
- (id)_createGrabberShadowLayer;
- (void)_updateBlendMode;

@end
