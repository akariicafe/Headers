@interface MDLAnimatedScalarArray : MDLAnimatedValue

@property (nonatomic) unsigned long long elementCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)precision;
- (id)initWithElementCount:(unsigned long long)a0;
- (unsigned long long)getDoubleArray:(double *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1 time:(double)a2;
- (unsigned long long)getFloatArray:(float *)a0 maxCount:(unsigned long long)a1;
- (void)setFloatArray:(const float *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (void)setDoubleArray:(const double *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (unsigned long long)getFloatArray:(float *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void)resetWithFloatArray:(const float *)a0 count:(unsigned long long)a1 atTimes:(const double *)a2 count:(unsigned long long)a3;
- (void)resetWithDoubleArray:(const double *)a0 count:(unsigned long long)a1 atTimes:(const double *)a2 count:(unsigned long long)a3;
- (unsigned long long)getDoubleArray:(double *)a0 maxCount:(unsigned long long)a1;

@end
