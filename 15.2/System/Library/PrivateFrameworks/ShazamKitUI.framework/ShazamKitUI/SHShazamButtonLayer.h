@class CALayer, NSString, CAShapeLayer;
@protocol SHShazamButtonViewDelegate;

@interface SHShazamButtonLayer : CALayer <CAAnimationDelegate>

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

- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)buildView;
- (void)drawTransparentShape;
- (void)performSDrawingAnimationWithDuration:(double)a0 delay:(double)a1;
- (void)removeTransparentShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)drawSolidShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)drawSolidShape;
- (void)removeTransparentShape;
- (struct CGPath { } *)topStrokePath;
- (id)strokeLayerWithPath:(struct CGPath { } *)a0 color:(struct CGColor { } *)a1;
- (struct CGPath { } *)bottomStrokePath;
- (struct CGPath { } *)topStrokeLongPath;
- (struct CGPath { } *)bottomStrokeLongPath;
- (void)performSDrawingIntroAnimation;
- (void)skipIntroAnimation;
- (void)performFadeInIntroAnimation:(double)a0 delay:(double)a1;

@end
