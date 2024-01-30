@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long queryStrategy;
@property (readonly, copy, nonatomic) HKSampleType *sampleType;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL hasUnfrozenSeries;

+ (id)sampleTypeChangeWithSampleType:(id)a0 dateInterval:(id)a1 hasUnfrozenSeries:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_extendDateIntervalWithSample:(id)a0;
- (id)_initWithSampleType:(id)a0 startTime:(double)a1 endTime:(double)a2 hasUnfrozenSeries:(BOOL)a3 queryStrategy:(long long)a4;

@end
