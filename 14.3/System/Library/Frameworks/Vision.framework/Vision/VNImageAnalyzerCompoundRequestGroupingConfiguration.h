@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (id)init;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (void)addOriginalRequest:(id)a0 forKind:(unsigned long long)a1;
- (id)detectorConfigurationOptions;
- (void)enumerateOriginalRequestsByKindUsingBlock:(id /* block */)a0;
- (id)originalRequests;
- (BOOL)preferBackgroundProcessing;
- (id)processingDevice;

@end
