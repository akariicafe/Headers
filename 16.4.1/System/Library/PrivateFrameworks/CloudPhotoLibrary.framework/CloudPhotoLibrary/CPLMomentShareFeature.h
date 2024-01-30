@interface CPLMomentShareFeature : CPLFeature

- (BOOL)disableFeatureInStore:(id)a0 error:(id *)a1;
- (BOOL)enableFeatureInStore:(id)a0 error:(id *)a1;
- (BOOL)handleScopeWhenFeatureIsDisabled:(id)a0 scopeType:(long long)a1 store:(id)a2 error:(id *)a3;

@end
