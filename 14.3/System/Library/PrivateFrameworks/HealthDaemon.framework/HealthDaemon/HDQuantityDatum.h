@class NSDictionary, HKQuantity;

@interface HDQuantityDatum : HDDataCollectorSensorDatum

@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) id /* block */ saveCompletion;

+ (id)quantityDatumWithHKQuantityDatum:(id)a0 metadata:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)quantityDataForDifferencesInData:(id)a0 baseDatum:(id)a1 unit:(id)a2 differenceHandler:(id /* block */)a3 intervalHandler:(id /* block */)a4;
+ (id)hdt_quantityDatumForType:(id)a0 startTime:(double)a1 endTime:(double)a2 value:(double)a3;

- (void).cxx_destruct;
- (id)datumForChangeSince:(id)a0 newIdentifier:(id)a1 newResumeContext:(id)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 quantity:(id)a2 metadata:(id)a3 resumeContextProvider:(id /* block */)a4;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 resumeContext:(id)a2 quantity:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
