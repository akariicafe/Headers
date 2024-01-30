@class NSString;

@interface UIInterpolatedPoint : NSObject <UIVectorOperatable> {
    struct CGPoint { double x; double y; } _point;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)zeroCompatibleWithVector:(id)a0;
+ (id)epsilonCompatibleWithVector:(id)a0;

- (BOOL)isUndefined;
- (void)integrateWithVelocity:(id)a0 target:(id)a1 intermediateTarget:(id)a2 intermediateTargetVelocity:(id)a3 parameters:(struct { struct { double x0; double x1; double x2; long long x3; } x0; struct { double x0; double x1; double x2; long long x3; } x1; struct { double x0; double x1; double x2; long long x3; } x2; BOOL x3; BOOL x4; BOOL x5; })a4 state:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })a5 delta:(double)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addVector:(id)a0;
- (id)multiplyByScalar:(double)a0;
- (id)interpolateTo:(id)a0 progress:(double)a1;
- (void)reinitWithVector:(id)a0;
- (id)getValue;
- (id)multiplyByVector:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 withinEpsilon:(id)a1;
- (BOOL)isCompatibleWith:(id)a0;

@end
