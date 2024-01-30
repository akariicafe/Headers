@class NSString, NSMutableArray, NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {
    NSMutableDictionary *_detectorConfigurationOptions;
}

@property (readonly, nonatomic) NSMutableArray *originalRequests;
@property (copy, nonatomic) NSString *detectorType;

- (id)initWithRequestClass:(Class)a0;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)detectorConfigurationOptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDetectorConfigurationOptions:(id)a0;
- (void)setResolvedRevision:(unsigned long long)a0;

@end
