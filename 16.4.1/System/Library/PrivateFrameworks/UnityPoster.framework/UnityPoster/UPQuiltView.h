@class UIColor, CAShapeLayer, NSTimer, UPQuiltConfiguration;
@protocol UPQuiltViewDelegate;

@interface UPQuiltView : UIView {
    double _animationDuration;
    id /* block */ _animationCompletion;
    NSTimer *_animationCompletionTimer;
    struct CGPath { } *_topQuiltPieceTargetPathRef;
    struct CGPath { } *_bottomLeftQuiltPieceTargetPathRef;
    CAShapeLayer *_intersectionPieceLayer;
    struct CGPath { } *_intersectionPieceTargetPathRef;
    struct CGPath { } *_thirdPieceTargetPathRef;
}

@property (weak, nonatomic) id<UPQuiltViewDelegate> quiltViewDelegate;
@property (retain, nonatomic) UIColor *topQuiltColor;
@property (retain, nonatomic) UIColor *bottomLeftQuiltColor;
@property (retain, nonatomic) UIColor *intersectionPieceColor;
@property (retain, nonatomic) UIColor *bottomRightQuiltColor;
@property (retain, nonatomic) CAShapeLayer *topQuiltPieceLayer;
@property (retain, nonatomic) CAShapeLayer *bottomLeftQuiltPieceLayer;
@property (retain, nonatomic) CAShapeLayer *bottomRightQuiltPieceLayer;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) const struct CGPath { } *topQuiltPathRef;
@property (readonly, nonatomic) const struct CGPath { } *bottomLeftQuiltPathRef;
@property (retain, nonatomic) UPQuiltConfiguration *configuration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setColors;
- (void)updateQuiltsWithUnlockProgress:(double)a0 wakeProgress:(double)a1;

@end
