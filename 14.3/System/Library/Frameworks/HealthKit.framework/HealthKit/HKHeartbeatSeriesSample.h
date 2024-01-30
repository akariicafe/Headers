@class NSNumber, NSString, NSData;

@interface HKHeartbeatSeriesSample : HKSeriesSample <_HKBinarySample> {
    NSData *_heartbeatData;
    NSNumber *_cachedMinBeatsPerMinute;
    NSNumber *_cachedMaxBeatsPerMinute;
}

@property (readonly) NSNumber *_minimumBeatsPerMinute;
@property (readonly) NSNumber *_maximumBeatsPerMinute;
@property (readonly) long long numberOfDataPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_heartbeatSeriesSampleWithData:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;
+ (BOOL)_isConcreteObjectClass;
+ (id)_heartbeatSeriesSampleFromCSV:(id)a0 startDate:(id)a1 metadata:(id)a2 error:(out id *)a3;
+ (id)heartBeatSequenceSampleFromCSV:(id)a0 startDate:(id)a1 metadata:(id)a2 error:(out id *)a3;
+ (id)heartbeatSequenceSampleWithData:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;

- (id)payload;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setPayload:(id)a0;
- (BOOL)_shouldNotifyOnInsert;
- (void)_enumerateHeartbeatDataWithBlock:(id /* block */)a0;
- (unsigned long long)count;
- (void)_computeMinimumAndMaximumBeatsPerMinute;
- (void)enumerateHeartbeatDataWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
