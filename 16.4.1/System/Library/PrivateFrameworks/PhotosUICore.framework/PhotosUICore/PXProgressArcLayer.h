@interface PXProgressArcLayer : CALayer

@property (nonatomic) double radius;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) double lineWidth;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)init;

@end
