@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (void).cxx_destruct;
- (id)init;

@end
