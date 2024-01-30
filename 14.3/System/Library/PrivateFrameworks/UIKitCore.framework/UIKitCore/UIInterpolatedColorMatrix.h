@class NSString;

@interface UIInterpolatedColorMatrix : NSObject <UIVectorOperatable> {
    struct CAColorMatrix { float m11; float m12; float m13; float m14; float m15; float m21; float m22; float m23; float m24; float m25; float m31; float m32; float m33; float m34; float m35; float m41; float m42; float m43; float m44; float m45; } _colorMatrix;
    double _epsilon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueWithColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0;
+ (id)zero;
+ (id)epsilon;

- (BOOL)isUndefined;
- (id)initWithColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0;
- (id)interpolateTo:(id)a0 progress:(double)a1;
- (id)addVector:(id)a0;
- (void)integrateWithVelocity:(id)a0 target:(id)a1 intermediateTarget:(id)a2 intermediateTargetVelocity:(id)a3 parameters:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; BOOL x3; BOOL x4; BOOL x5; })a4 state:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })a5 delta:(double)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0 epsilon:(double)a1;
- (id)multiplyByScalar:(double)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 withinEpsilon:(id)a1;
- (void)reinitWithVector:(id)a0;
- (id)getNSValue;
- (id)multiplyByVector:(id)a0;
- (id)getValue;

@end
