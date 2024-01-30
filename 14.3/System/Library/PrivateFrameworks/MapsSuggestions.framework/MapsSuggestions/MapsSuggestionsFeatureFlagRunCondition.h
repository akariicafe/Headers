@class NSString;

@interface MapsSuggestionsFeatureFlagRunCondition : MapsSuggestionsBaseRunCondition {
    NSString *_featureFlag;
}

- (void).cxx_destruct;
- (id)initWithFeatureFlag:(id)a0;
- (BOOL)shouldRun;

@end
