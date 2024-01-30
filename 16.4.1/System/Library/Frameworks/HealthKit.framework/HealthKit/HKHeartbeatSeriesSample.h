@class NSData, NSNumber, NSString;

@interface HKHeartbeatSeriesSample : HKSeriesSample <_HKBinarySample> {
    NSNumber *_cachedMinBeatsPerMinute;
    NSNumber *_cachedMaxBeatsPerMinute;
}

@property (readonly, copy, nonatomic) NSData *heartbeatData;
@property (readonly, copy) NSNumber *_minimumBeatsPerMinute;
@property (readonly, copy) NSNumber *_maximumBeatsPerMinute;
@property (readonly) long long numberOfDataPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)_heartbeatSeriesSampleFromCSV:(id)a0 startDate:(id)a1 metadata:(id)a2 error:(out id *)a3;
+ (id)_heartbeatSeriesSampleWithData:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;
+ (id)heartBeatSequenceSampleFromCSV:(id)a0 startDate:(id)a1 metadata:(id)a2 error:(out id *)a3;
+ (id)heartbeatSequenceSampleWithData:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)payload;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (void)_computeMinimumAndMaximumBeatsPerMinute;
- (void)_enumerateHeartbeatDataWithBlock:(id /* block */)a0;
- (void)_setPayload:(id)a0;
- (BOOL)_shouldNotifyOnInsert;
- (void)enumerateHeartbeatDataWithBlock:(id /* block */)a0;

@end
