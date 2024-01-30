@class NSMutableDictionary;

@interface ATXInformationFeatureSetBuilder : NSObject <ATXFeatureSetBuilderProtocol> {
    NSMutableDictionary *_features;
}

+ (id)stringForInfoSuggestionFeature:(unsigned long long)a0;

- (void)appendFeature:(unsigned long long)a0 value:(double)a1;
- (id)build;
- (void).cxx_destruct;
- (void)setFeatureWithName:(id)a0 toValue:(id)a1;

@end
