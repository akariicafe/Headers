@class UIView, NSString, UIImage, CLKDevice, CALayer, UIImageView, NTKAnalogHandConfiguration, CLKUIColoringImageView, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKHandView : UIView <CLKMonochromeComplicationView> {
    CALayer *_inlayLayer;
    UIImageView *_radialShadowImageView;
    UIImageView *_dropShadowImageView;
}

@property (readonly, nonatomic) CALayer *inlayLayer;
@property (readonly, nonatomic) UIView *handDotView;
@property (readonly, nonatomic) CLKUIColoringImageView *handImageView;
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

- (void)setNeedsLayout;
- (id)shadowView;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateTransform;
- (void).cxx_destruct;
- (void)_adjustHandImageSubviewOrder;
- (void)_initWithImage:(id)a0 forDevice:(id)a1;
- (void)_layoutInlayLayer;
- (void)_updateShadows;
- (struct CGPoint { double x0; double x1; })anchorPointFromConfiguration;
- (id)initWithConfiguration:(id)a0 forDevice:(id)a1 maskedShadow:(BOOL)a2;
- (id)initWithImage:(id)a0 forDevice:(id)a1;
- (void)noModelUpdate_setColor:(id)a0;
- (void)noModelUpdate_setHandDotColor:(id)a0;
- (void)noModelUpdate_setInlayColor:(id)a0;
- (void)noModelUpdate_setInlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setupHandDotViewWithDiameter:(double)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
