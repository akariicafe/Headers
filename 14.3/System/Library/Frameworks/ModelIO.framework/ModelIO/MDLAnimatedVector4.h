@interface MDLAnimatedVector4 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1 time:(double)a2;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (void)setFloat4:(SEL)a0 atTime:(double)a1;
- (void)setDouble4:(SEL)a0 atTime:(double)a1;
- (void /* unknown type, empty encoding */)float4AtTime:(double)a0;
- (void /* unknown type, empty encoding */)double4AtTime:(double)a0;
- (void)resetWithFloat4Array:(const void *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithDouble4Array:(const void *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (unsigned long long)getFloat4Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getDouble4Array:(void *)a0 maxCount:(unsigned long long)a1;

@end
