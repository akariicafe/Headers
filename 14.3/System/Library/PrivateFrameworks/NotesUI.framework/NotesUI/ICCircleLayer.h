@interface ICCircleLayer : CALayer

@property double strokeWidth;
@property (retain, nonatomic) struct CGColor { } *strokeColor;
@property (retain, nonatomic) struct CGColor { } *fillColor;

- (void)drawInContext:(struct CGContext { } *)a0;

@end
