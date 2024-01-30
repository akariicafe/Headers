@class NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject {
    NSMutableDictionary *_groupingConfigurations;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)groupingConfigurationsCount;
- (id)groupingConfigurationForRequest:(id)a0 kind:(unsigned long long)a1;
- (id)allGroupingConfigurations;
- (BOOL)preferBackgroundProcessing;

@end
