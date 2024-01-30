@class NSMutableDictionary;

@interface ATXCandidateRelevanceModelDataStoreCache : NSObject {
    NSMutableDictionary *_featurizationManagers;
}

- (void).cxx_destruct;
- (id)init;
- (id)featurizationManagerForFeaturizationManagerId:(long long)a0;
- (void)setFeaturizationManager:(id)a0 forFeaturizationManagerId:(long long)a1;

@end
