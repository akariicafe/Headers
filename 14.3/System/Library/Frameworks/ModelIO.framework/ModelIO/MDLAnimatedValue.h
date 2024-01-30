@class NSArray;

@interface MDLAnimatedValue : NSObject <NSCopying> {
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> > { struct TimeSampledVtValue *__begin_; struct TimeSampledVtValue *__end_; struct __compressed_pair<(anonymous namespace)::TimeSampledVtValue *, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> > { struct TimeSampledVtValue *__value_; } __end_cap_; } _timeSampledData;
}

@property (readonly, nonatomic) unsigned long long precision;
@property (readonly, nonatomic) unsigned long long timeSampleCount;
@property (readonly, nonatomic) double minimumTime;
@property (readonly, nonatomic) double maximumTime;
@property (nonatomic) unsigned long long interpolation;
@property (readonly, nonatomic) NSArray *keyTimes;

- (void)clear;
- (BOOL)isAnimated;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)resetWithAnimatedValue:(id)a0;
- (unsigned long long)getTimes:(double *)a0 maxCount:(unsigned long long)a1;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<Sdf_Pool<Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep *x0; } x0; } x3; } *)a0 timeScale:(double)a1 time:(double)a2;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;

@end
