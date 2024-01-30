@class NSString;

@interface BWStats : NSObject {
    double _sumX;
    double _sumXX;
}

@property (nonatomic) double multiplier;
@property (copy, nonatomic) NSString *unitDesignator;
@property (readonly, nonatomic) long long numberOfSamples;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double standardDeviation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithStats:(id)a0;
- (id)description;
- (void)removeDataPoint:(double)a0;
- (id)debugDescription;
- (void)addDataPoint:(double)a0;

@end
