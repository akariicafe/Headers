@class NSString, NSDictionary, NSArray;

@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSString *detectorType;
@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions;
@property (copy, nonatomic) NSArray *originalRequestConfigurations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
