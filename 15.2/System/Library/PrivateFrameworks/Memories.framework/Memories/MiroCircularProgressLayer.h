@class UIColor;

@interface MiroCircularProgressLayer : CALayer

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double circleLineWidth;
@property (nonatomic) double arcLineWidth;
@property (nonatomic) double animationDuration;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (void).cxx_destruct;

@end
