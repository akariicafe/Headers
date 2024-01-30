@class NSDictionary, HKClinicalSampleAccountProvider, NSArray;

@interface HKClinicalSampleAccount : NSObject

@property (copy, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) HKClinicalSampleAccountProvider *provider;
@property (copy, nonatomic) NSArray *batches;

- (void).cxx_destruct;
- (id)asClinicalProviderWithBrand:(id)a0;
- (id)asClinicalGatewayWithBrand:(id)a0;

@end
