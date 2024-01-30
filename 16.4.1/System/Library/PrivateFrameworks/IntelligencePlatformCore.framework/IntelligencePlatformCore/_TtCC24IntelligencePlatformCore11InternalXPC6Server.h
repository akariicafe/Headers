@class GDEntityResolutionRequest, NSString, NSDictionary, NSError, NSNumber, GDEntityResolutionResult;

@interface _TtCC24IntelligencePlatformCore11InternalXPC6Server : NSObject <GDInternalXPCProtocol>

- (void)clearPipelineStatusWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)runDeltaUpdatePipelineWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)runToMatchingPipelineWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)stopPipelineWithCompletion:(void (^)(BOOL, NSError *))a0;
- (id)init;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(BOOL)a0 shouldClearSampleGenerator:(BOOL)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(BOOL)a0 shouldDigestSampleGenerator:(BOOL)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingEvaluateForBehaviorType:(NSString *)a0 modelName:(NSString *)a1 useTrial:(BOOL)a2 completion:(void (^)(NSDictionary *, NSError *))a3;
- (void)behaviorUnderstandingFeaturizeBehaviorOfType:(id)a0 identifier:(id)a1 usingContextAt:(id)a2 completion:(id /* block */)a3;
- (void)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)a0 behaviorType:(id)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingHistogramsOfKind:(id)a0 behaviorType:(id)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingRecentBehaviorsOfType:(id)a0 completion:(id /* block */)a1;
- (void)behaviorUnderstandingSampleEntityTaggingFeaturesForPersonID:(id)a0 completion:(id /* block */)a1;
- (void)behaviorUnderstandingStatusWithCompletion:(id /* block */)a0;
- (void)behaviorUnderstandingTriggerEntityTaggingDataCollectionWithCompletion:(id /* block */)a0;
- (void)benchmarkWithCompletion:(id /* block */)a0;
- (void)photosMetadataWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(long long)a2 newestFirst:(BOOL)a3 completion:(id /* block */)a4;
- (void)resolveEntityWithRequest:(GDEntityResolutionRequest *)a0 enableSessionLogging:(BOOL)a1 configName:(NSString *)a2 encodedConfig:(NSString *)a3 completion:(void (^)(GDEntityResolutionResult *, NSError *))a4;
- (void)statsWithCompletion:(id /* block */)a0;
- (void)triplesQueryWithQuery:(id)a0 completion:(id /* block */)a1;
- (void)validateGraphWithCompletion:(id /* block */)a0;
- (void)vectorSearchBenchmarkWithConfigFilePath:(NSString *)a0 completion:(void (^)(NSString *, NSError *))a1;
- (void)viewClearAllDataWithName:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)viewInfoWithCompletion:(id /* block */)a0;
- (void)viewMarkNeedsUpdateWithSchedule:(id)a0 completion:(id /* block */)a1;
- (void)viewRunUpdateWithName:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)viewSetEnabledWithName:(NSString *)a0 enabled:(NSNumber *)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)viewValidateWithCompletion:(id /* block */)a0;

@end
