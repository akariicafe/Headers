@class NSArray, NSString, CAShapeLayer;

@interface TSDShapeRenderable : TSDRenderable

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) const struct CGPath { } *path;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) struct CGColor { } *fillColor;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (copy, nonatomic) NSString *lineCap;
@property (copy, nonatomic) NSString *lineJoin;
@property (nonatomic) double lineDashPhase;
@property (nonatomic) double miterLimit;
@property (nonatomic) double strokeEnd;

+ (id)renderable;
+ (id)renderableFromShapeLayer:(id)a0;

- (id)initWithShapeLayer:(id)a0;
- (void)setCGLineCap:(int)a0;
- (void)setCGLineJoin:(int)a0;

@end
