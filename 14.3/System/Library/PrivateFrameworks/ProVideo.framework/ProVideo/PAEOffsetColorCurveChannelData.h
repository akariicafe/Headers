@interface PAEOffsetColorCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {
    void *_curve_private;
}

+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const struct offsetcolor_t<double> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; double x5; double x6; double x7; double x8; struct bezier_t<double, false> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; } x9; } *)a3;
+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2;

- (double)red;
- (double)blue;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)dealloc;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)green;
- (id)description;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (double)evaluate:(double)a0;
- (struct offsetcolor_t<double> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; double x5; double x6; double x7; double x8; struct bezier_t<double, false> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; } x9; } *)curveRef;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const struct offsetcolor_t<double> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; double x5; double x6; double x7; double x8; struct bezier_t<double, false> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; } x9; } *)a3;
- (BOOL)conformFromColorCurve:(id)a0;

@end
