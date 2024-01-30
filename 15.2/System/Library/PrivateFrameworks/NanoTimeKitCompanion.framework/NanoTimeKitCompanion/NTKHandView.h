@class UIView, NSString, NTKColoringImageView, UIImage, CALayer, CLKDevice, NTKAnalogHandConfiguration, UIImageView, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKHandView : UIView <CLKMonochromeComplicationView> {
    CALayer *_inlayLayer;
    UIImageView *_radialShadowImageView;
    UIImageView *_dropShadowImageView;
}

@property (readonly, nonatomic) CALayer *inlayLayer;
@property (readonly, nonatomic) UIView *handDotView;
@property (readonly, nonatomic) NTKColoringImageView *handImageView;
@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double zRotation;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIColor *inlayColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inlayInsets;
@property (readonly) NTKAnalogHandConfiguration *configuration;
@property (nonatomic) BOOL shadowsHidden;
@property (nonatomic) BOOL radialShadowsHidden;
@property (nonatomic) BOOL dropShadowsHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } shadowInsets;
@property (retain, nonatomic) UIImage *radialShadowImage;
@property (retain, nonatomic) UIImage *dropShadowImage;
@property (nonatomic) struct CGPath { } *dropShadowPath;
@property (nonatomic) struct CGPath { } *radialShadowPath;
@property (nonatomic) struct CGSize { double width; double height; } directionalShadowOffset;
@property (nonatomic) BOOL shadowImageBehindHand;
@property (retain, nonatomic) UIView *transitionContainerView;
@property (retain, nonatomic) UIColor *handDotColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shadowView;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateTransform;
- (void)dealloc;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithConfiguration:(id)a0 forDevice:(id)a1 maskedShadow:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })anchorPointFromConfiguration;
- (void)setupHandDotViewWithDiameter:(double)a0;
- (void)_initWithImage:(id)a0 forDevice:(id)a1;
- (void)_updateShadows;
- (void)_layoutInlayLayer;
- (void)noModelUpdate_setColor:(id)a0;
- (void)_adjustHandImageSubviewOrder;
- (void)noModelUpdate_setInlayColor:(id)a0;
- (void)noModelUpdate_setInlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)noModelUpdate_setHandDotColor:(id)a0;
- (id)initWithImage:(id)a0 forDevice:(id)a1;

@end
