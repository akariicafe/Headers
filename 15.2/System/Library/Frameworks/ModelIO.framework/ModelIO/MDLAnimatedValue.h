@class NSArray;

@interface MDLAnimatedValue : NSObject <NSCopying> {
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::allocator<(anonymous namespace)::TimeSampledVtValue>> { struct TimeSampledVtValue *__begin_; struct TimeSampledVtValue *__end_; struct __compressed_pair<(anonymous namespace)::TimeSampledVtValue *, std::allocator<(anonymous namespace)::TimeSampledVtValue>> { struct TimeSampledVtValue *__value_; } __end_cap_; } _timeSampledData;
}

@property (readonly, nonatomic) unsigned long long precision;
@property (readonly, nonatomic) unsigned long long timeSampleCount;
@property (readonly, nonatomic) double minimumTime;
@property (readonly, nonatomic) double maximumTime;
@property (nonatomic) unsigned long long interpolation;
@property (readonly, nonatomic) NSArray *keyTimes;

- (void)clear;
- (BOOL)isAnimated;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)resetWithAnimatedValue:(id)a0;
- (unsigned long long)getTimes:(double *)a0 maxCount:(unsigned long long)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;

@end
