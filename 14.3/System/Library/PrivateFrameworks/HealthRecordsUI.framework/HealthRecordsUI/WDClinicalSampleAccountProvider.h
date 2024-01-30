@class NSString, NSDictionary, WDClinicalSampleAccountProviderGateway;

@interface WDClinicalSampleAccountProvider : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) WDClinicalSampleAccountProviderGateway *gateway;

- (void).cxx_destruct;

@end
