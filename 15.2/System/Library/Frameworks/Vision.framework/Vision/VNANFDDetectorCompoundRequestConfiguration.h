@class NSDictionary, NSMutableArray, NSString;

@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions;
@property (readonly, nonatomic) NSMutableArray *originalRequests;
@property (copy, nonatomic) NSString *detectorType;

- (id)initWithRequestClass:(Class)a0;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
