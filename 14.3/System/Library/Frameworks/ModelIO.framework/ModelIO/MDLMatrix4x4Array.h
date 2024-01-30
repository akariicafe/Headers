@interface MDLMatrix4x4Array : NSObject <NSCopying> {
    struct VtValue { struct type { unsigned char __lx[8]; } _storage; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *_ptrAndBits; } _info; } _data;
}

@property (readonly, nonatomic) unsigned long long elementCount;
@property (readonly, nonatomic) unsigned long long precision;

- (void)clear;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithElementCount:(unsigned long long)a0;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 time:(double)a1;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0;
- (void)setFloat4x4Array:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1;
- (void)setDouble4x4Array:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)getFloat4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getDouble4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;

@end
