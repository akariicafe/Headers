@class HKQuantity;

@interface HDMCRecentBasalBodyTemperatureRange : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HKQuantity *upperQuantile;
@property (readonly, copy, nonatomic) HKQuantity *median;
@property (readonly, copy, nonatomic) HKQuantity *lowerQuantile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithUpperQuantileValue:(double)a0 medianValue:(double)a1 lowerQuantileValue:(double)a2 unit:(id)a3;
- (id)recentBasalBodyTemperatureWithMostRecentQuantity:(id)a0;

@end
