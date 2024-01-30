@class NSData, PKPass, UIImage, PKDynamicContentView, CALayer, UIImageView, CAEmitterLayer, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration;

@interface PKDynamicLayerView : UIView {
    PKPass *_pass;
    PKDynamicContentView *_backgroundParallaxView;
    PKDynamicContentView *_neutralView;
    PKDynamicContentView *_foregroundParallaxView;
    PKDynamicContentView *_staticOverlayView;
    UIImageView *_staticFallbackView;
    PKDynamicLayerConfiguration *_dynamicLayerConfiguration;
    PKDynamicLayerTransactionEffectConfiguration *_transactionEffectConfiguration;
    UIImage *_transactionEffectEmitterImage;
    NSData *_transactionEffectShapeData;
    CAEmitterLayer *_transactionEffectLayer;
    CALayer *_dimmingLayer;
    BOOL _invalidated;
    BOOL _paused;
    BOOL _loaded;
    BOOL _effectiveMotionEnabled;
}

@property (nonatomic) BOOL automaticallyLoadContent;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)_configureViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1;
- (void)dealloc;
- (void)_configureDynamicViewsWithImageSet:(id)a0;
- (void)_removeParallaxMotionEffect;
- (void)_addParallaxMotionEffect;
- (id)_dimmingLayerAnimationWithDuration:(double)a0;
- (void)layoutSubviews;
- (void)runTransactionEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1 automaticallyLoadContent:(BOOL)a2;
- (void)loadContent;
- (void)_updateVisibility;
- (void)invalidate;

@end
