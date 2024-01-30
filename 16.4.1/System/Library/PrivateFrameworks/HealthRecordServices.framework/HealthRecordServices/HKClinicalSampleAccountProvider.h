@class NSString, NSDictionary, HKClinicalSampleAccountProviderGateway;

@interface HKClinicalSampleAccountProvider : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) HKClinicalSampleAccountProviderGateway *gateway;
@property (nonatomic) long long minCompatibleAPIVersion;

- (void).cxx_destruct;

@end
