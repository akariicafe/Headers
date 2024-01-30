@class HKSampleType, NSDate;

@interface HKSample : HKObject <NSCopying> {
    HKSampleType *_sampleType;
}

@property (nonatomic, getter=_startTimestamp, setter=_setStartTimestamp:) double startTimestamp;
@property (nonatomic, getter=_endTimestamp, setter=_setEndTimestamp:) double endTimestamp;
@property (readonly, copy) HKSampleType *sampleType;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) BOOL hasUndeterminedDuration;

+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
+ (id)_newSampleWithType:(id)a0 startDate:(double)a1 endDate:(double)a2 device:(id)a3 metadata:(id)a4 config:(id /* block */)a5;
+ (id)_newSampleFromDatesWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 config:(id /* block */)a5;
+ (id)_enumerateValidIntervalsWithStartDate:(id)a0 endDate:(id)a1 sampleType:(id)a2 block:(id /* block */)a3;

- (void).cxx_destruct;
- (void)_setSampleType:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (struct { long long x0; long long x1; })hk_dayIndexRangeWithCalendar:(id)a0;
- (id)valueForKey:(id)a0;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (long long)_externalSyncObjectCode;
- (BOOL)_requiresPrivateEntitlementForQueries;
- (id)description;
- (id)_init;
- (void)_setType:(id)a0;
- (void)_setStartDate:(id)a0;
- (void)_setEndDate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
