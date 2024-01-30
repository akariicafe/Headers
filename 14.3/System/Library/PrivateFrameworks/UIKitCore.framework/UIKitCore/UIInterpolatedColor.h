@class NSString;

@interface UIInterpolatedColor : NSObject <UIVectorOperatable> {
    struct { double r; double g; double b; double a; } _color;
    double _epsilon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueWithUIColor:(id)a0;
+ (id)zero;
+ (id)epsilon;
+ (id)valueWithCGColor:(struct CGColor { } *)a0;

- (BOOL)isUndefined;
- (id)interpolateTo:(id)a0 progress:(double)a1;
- (struct CGColor { } *)getCGColor;
- (id)addVector:(id)a0;
- (void)integrateWithVelocity:(id)a0 target:(id)a1 intermediateTarget:(id)a2 intermediateTargetVelocity:(id)a3 parameters:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; BOOL x3; BOOL x4; BOOL x5; })a4 state:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })a5 delta:(double)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDecomposedColor:(struct { double x0; double x1; double x2; double x3; })a0;
- (id)initWithDecomposedColor:(struct { double x0; double x1; double x2; double x3; })a0 epsilon:(double)a1;
- (id)multiplyByScalar:(double)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 withinEpsilon:(id)a1;
- (void)reinitWithVector:(id)a0;
- (id)getNSValue;
- (id)multiplyByVector:(id)a0;
- (id)getUIColor;
- (id)getValue;

@end
