@class JFXEffectAnimationDelegate, JFXOverlayEffectTransforms, CALayer, JFXOverlayEffectFrame;

@interface JFXOverlayEffectAnimationView : UIView

@property (retain, nonatomic) JFXOverlayEffectFrame *fromEffectFrame;
@property (retain, nonatomic) JFXOverlayEffectFrame *toEffectFrame;
@property (retain, nonatomic) JFXEffectAnimationDelegate *animationDelegate;
@property (retain, nonatomic) CALayer *transformLayer;
@property (retain, nonatomic) CALayer *additionalTransformLayer;
@property (retain, nonatomic) CALayer *trackingTransformLayer;
@property (retain, nonatomic) CALayer *cameraTransformLayer;
@property (readonly, nonatomic) double fractionComplete;
@property (readonly, nonatomic) JFXOverlayEffectTransforms *currentEffectTransforms;

- (void).cxx_destruct;
- (void)animate:(id)a0 completion:(id /* block */)a1;
- (id)initWithEffectFrame:(id)a0 toEffectFrame:(id)a1;

@end
