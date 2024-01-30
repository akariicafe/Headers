@class NSDictionary, HKQuantity;

@interface HDQuantityDatum : HDDataCollectorSensorDatum

@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) id /* block */ saveCompletion;

+ (BOOL)supportsSecureCoding;
+ (id)hdt_quantityDatumForType:(id)a0 startTime:(double)a1 endTime:(double)a2 value:(double)a3;
+ (id)quantityDataForDifferencesInData:(id)a0 baseDatum:(id)a1 unit:(id)a2 differenceHandler:(id /* block */)a3 intervalHandler:(id /* block */)a4;
+ (id)quantityDatumWithHKQuantityDatum:(id)a0 metadata:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)datumForChangeSince:(id)a0 newIdentifier:(id)a1 newResumeContext:(id)a2;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 quantity:(id)a2 metadata:(id)a3 resumeContextProvider:(id /* block */)a4;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 resumeContext:(id)a2 quantity:(id)a3;

@end
