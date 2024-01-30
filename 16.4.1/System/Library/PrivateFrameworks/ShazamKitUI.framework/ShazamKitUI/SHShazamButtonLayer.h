@class CALayer, NSString, CAShapeLayer;
@protocol SHShazamButtonViewDelegate;

@interface SHShazamButtonLayer : SHPaletteLayer <CAAnimationDelegate>

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) CALayer *shapeLayer;
@property (retain, nonatomic) CAShapeLayer *topTransparentLayer;
@property (retain, nonatomic) CAShapeLayer *bottomTransparentLayer;
@property (retain, nonatomic) CAShapeLayer *topSolidLayer;
@property (retain, nonatomic) CAShapeLayer *bottomSolidLayer;
@property (retain, nonatomic) CAShapeLayer *topBorder;
@property (nonatomic) BOOL initialAnimationPerformed;
@property (weak, nonatomic) id<SHShazamButtonViewDelegate> buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (struct CGPath { } *)bottomStrokeLongPath;
- (struct CGPath { } *)bottomStrokePath;
- (void)drawSolidShape;
- (void)drawSolidShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)drawTransparentShape;
- (void)performFadeInIntroAnimation:(double)a0 delay:(double)a1;
- (void)performSDrawingAnimationWithDuration:(double)a0 delay:(double)a1;
- (void)performSDrawingIntroAnimation;
- (void)removeTransparentShape;
- (void)removeTransparentShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)skipIntroAnimation;
- (id)strokeLayerWithPath:(struct CGPath { } *)a0 color:(struct CGColor { } *)a1;
- (struct CGPath { } *)topStrokeLongPath;
- (struct CGPath { } *)topStrokePath;

@end
