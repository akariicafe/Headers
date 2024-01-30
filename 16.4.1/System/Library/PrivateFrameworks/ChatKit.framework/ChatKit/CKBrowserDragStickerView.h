@class UIView, NSString, NSArray, CADisplayLink, UIImage, NSMutableDictionary, CALayer, CKElasticFunction;

@interface CKBrowserDragStickerView : UIView <CKAnimationTimerObserver>

@property (retain, nonatomic) UIImage *currentFrameImage;
@property (retain, nonatomic) CALayer *perspectiveLayer;
@property (nonatomic) struct CGSize { double width; double height; } rasterizedImageSize;
@property (retain, nonatomic) CALayer *shineLayer;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) CALayer *dropShadowLayer;
@property (retain, nonatomic) CALayer *peelLayer;
@property (retain, nonatomic) CALayer *meshLayer;
@property (nonatomic) struct CGPoint { double x; double y; } meshLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } peelLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } shineLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } shadowLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } dropShadowLayerStartPosition;
@property (retain, nonatomic) NSArray *dragImageFrames;
@property (retain, nonatomic) UIView *plusImageView;
@property (retain, nonatomic) UIView *whiteBackground;
@property (retain, nonatomic) CALayer *peelImageLayer;
@property (retain, nonatomic) CALayer *peelMaskLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (nonatomic) double initialScale;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double elasticLastTime;
@property (nonatomic) double elasticRemainingTime;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionPositionX;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionPositionY;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionRotation;
@property (nonatomic) double elasticRotationAngle;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionScaleX;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionScaleY;
@property (nonatomic) double elasticScaleX;
@property (nonatomic) double elasticScaleY;
@property (nonatomic, getter=isScaledDown) BOOL scaledDown;
@property (nonatomic) BOOL canRotate;
@property (retain, nonatomic) NSMutableDictionary *peelMaskImageCache;
@property (nonatomic) struct CGPoint { double x; double y; } initialDragStartPosition;
@property (nonatomic) struct CGSize { double width; double height; } initialSize;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double dragViewScale;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic) BOOL canPeel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)meshTransform;
+ (id)springAnimationWithKeyPath:(id)a0 speed:(float)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setUpPeelLayers;
- (void)applyTransforms;
- (double)dragViewScaleUp;
- (void)_displayLinkCallback:(id)a0;
- (void)animatePeelWithCompletion:(id /* block */)a0;
- (void)animateScaleDown;
- (void)animationTimerFired:(unsigned long long)a0;
- (void)attachElasticEffectsForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)detachElasticEffects;
- (struct CGPoint { double x0; double x1; })dragViewCenter;
- (double)dragViewRotation;
- (id)initWithSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dragImage:(id)a1;
- (id)peelMaskImageFromImage:(id)a0;
- (void)reversePeelAnimationToPoint:(struct CGPoint { double x0; double x1; })a0 forPlacement:(BOOL)a1 shouldShrink:(BOOL)a2 completionBlock:(id /* block */)a3;
- (id)scaleImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)setPlusImageViewHidden:(BOOL)a0;
- (void)updateAnimationTimerObserving;
- (void)updateElasticEffectsForLocation:(struct CGPoint { double x0; double x1; })a0;

@end
