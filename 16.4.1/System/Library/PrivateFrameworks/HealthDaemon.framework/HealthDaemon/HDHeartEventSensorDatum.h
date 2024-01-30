@class NSArray, HKQuantity;

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum

@property (readonly, nonatomic) NSArray *associatedSampleUUIDs;
@property (readonly, nonatomic) HKQuantity *heartRateThreshold;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 heartRateThreshold:(id)a2 associatedSampleUUIDs:(id)a3 resumeContext:(id)a4;

@end
