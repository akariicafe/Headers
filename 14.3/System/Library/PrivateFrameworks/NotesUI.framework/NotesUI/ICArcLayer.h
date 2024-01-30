@interface ICArcLayer : ICCircleLayer

@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) BOOL drawClockwise;

- (void)drawInContext:(struct CGContext { } *)a0;

@end
