@class NSString;

@interface UIInterpolatedTransform : NSObject <UIVectorOperatable> {
    struct { double rotationX; double rotationY; double rotationZ; double scaleX; double scaleY; double scaleZ; double translationX; double translationY; double translationZ; } _transform;
    double _rotationEpsilon;
    double _scaleEpsilon;
    double _translationEpsilon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueWithDecomposedTransform:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0 rotationEpsilon:(double)a1 scaleEpsilon:(double)a2 translationEpsilon:(double)a3;
+ (id)zero;
+ (id)epsilon;
+ (id)valueWithCATransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 rotationEpsilon:(double)a1 scaleEpsilon:(double)a2 translationEpsilon:(double)a3;
+ (id)valueWithDecomposedTransform:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0;
+ (id)valueWithCATransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;

- (BOOL)isUndefined;
- (id)interpolateTo:(id)a0 progress:(double)a1;
- (id)addVector:(id)a0;
- (void)integrateWithVelocity:(id)a0 target:(id)a1 intermediateTarget:(id)a2 intermediateTargetVelocity:(id)a3 parameters:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; BOOL x3; BOOL x4; BOOL x5; })a4 state:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })a5 delta:(double)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)multiplyByScalar:(double)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 withinEpsilon:(id)a1;
- (void)reinitWithVector:(id)a0;
- (id)getNSValue;
- (id)multiplyByVector:(id)a0;
- (id)getValue;

@end
