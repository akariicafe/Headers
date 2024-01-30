@interface PAEHueCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {
    void *_curve_private;
}

+ (id)channelDataWithCurve:(const struct hue_t<double> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; double x5; struct bezier_t<double, true> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; } x6; } *)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)dealloc;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithCurve:(const struct hue_t<double> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; double x5; struct bezier_t<double, true> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; } x6; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (double)evaluate:(double)a0;
- (struct hue_t<double> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; double x5; struct bezier_t<double, true> { void /* function */ **x0; struct point_t<double, false, false> *x1; struct point_t<double, false, false> *x2; struct __compressed_pair<cc::point_t<double, false, false> *, std::__1::allocator<cc::point_t<double, false, false> > > { struct point_t<double, false, false> *x0; } x3; void /* function */ **x4; } x6; } *)curveRef;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;

@end
