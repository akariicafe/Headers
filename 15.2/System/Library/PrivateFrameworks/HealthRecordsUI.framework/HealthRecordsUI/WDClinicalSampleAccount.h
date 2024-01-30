@class NSDictionary, NSArray, WDClinicalSampleAccountProvider;

@interface WDClinicalSampleAccount : NSObject

@property (copy, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) WDClinicalSampleAccountProvider *provider;
@property (copy, nonatomic) NSArray *batches;

- (void).cxx_destruct;

@end
