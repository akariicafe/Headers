@interface MDLAnimatedQuaternion : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1 time:(double)a2;
- (struct { })floatQuaternionAtTime:(double)a0;
- (struct { })doubleQuaternionAtTime:(double)a0;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (unsigned long long)getFloatQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getDoubleQuaternionArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (void)setFloatQuaternion:(struct { })a0 atTime:(double)a1;
- (void)setDoubleQuaternion:(struct { })a0 atTime:(double)a1;
- (void)resetWithFloatQuaternionArray:(const struct { } *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithDoubleQuaternionArray:(const struct { } *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;

@end
