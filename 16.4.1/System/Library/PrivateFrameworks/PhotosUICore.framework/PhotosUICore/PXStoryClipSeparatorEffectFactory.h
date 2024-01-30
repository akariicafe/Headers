@interface PXStoryClipSeparatorEffectFactory : NSObject

+ (void)getParameters:(out struct { unsigned int x0; double x1; double x2; } *)a0 forParallelRotationsWithAngle:(double)a1 threeUpComposition:(id)a2;
+ (struct { unsigned int x0; double x1; double x2; })parametersForRotationWithAngle:(double)a0;
+ (void)getParameters:(out struct { unsigned int x0; double x1; double x2; } *)a0 forOppositeRotationsWithAngle:(double)a1 threeUpComposition:(id)a2;
+ (void)getParameters:(out struct { unsigned int x0; double x1; double x2; } *)a0 forOppositePansWithDistance:(double)a1 threeUpComposition:(id)a2;
+ (void)getParameters:(out struct { unsigned int x0; double x1; double x2; } *)a0 forParallelPansWithDistance:(double)a1 threeUpComposition:(id)a2;
+ (struct { unsigned int x0; double x1; double x2; })parametersForPanTowardsEdge:(unsigned int)a0 distance:(double)a1;

@end
