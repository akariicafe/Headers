@interface TSDCurveFitter : NSObject

@property (nonatomic) double errorDistance;
@property (nonatomic) long long errorIterations;

- (id)init;
- (void)fitCurveToPointArray:(struct { double x0; double x1; } *)a0 count:(long long)a1 bezierCallback:(void /* function */ *)a2 context:(void *)a3;
- (id)bezierPathFittingPointArray:(struct { double x0; double x1; } *)a0 count:(long long)a1;

@end
