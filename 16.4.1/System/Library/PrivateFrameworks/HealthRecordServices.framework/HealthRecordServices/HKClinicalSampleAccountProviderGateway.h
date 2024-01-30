@class NSString, NSDictionary, HKFHIRVersion;

@interface HKClinicalSampleAccountProviderGateway : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *properties;
@property (copy, nonatomic) HKFHIRVersion *FHIRVersion;

- (void).cxx_destruct;

@end
