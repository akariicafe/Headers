@class NSXPCInterface, NSXPCConnection;

@interface GDXPCInternalService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)statsWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)runToMatchingPipelineWithError:(id *)a0;
- (BOOL)viewClearAllDataWithName:(id)a0 error:(id *)a1;
- (BOOL)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(BOOL)a0 shouldClearSampleGenerator:(BOOL)a1 error:(id *)a2;
- (BOOL)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(BOOL)a0 shouldDigestSampleGenerator:(BOOL)a1 error:(id *)a2;
- (id)behaviorUnderstandingEvaluateForBehaviorType:(id)a0 modelName:(id)a1 useTrial:(BOOL)a2 error:(id *)a3;
- (id)behaviorUnderstandingFeaturizeBehaviorOfType:(id)a0 identifier:(id)a1 usingContextAt:(id)a2 error:(id *)a3;
- (id)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)a0 behaviorType:(id)a1 error:(id *)a2;
- (id)behaviorUnderstandingHistogramsOfKind:(id)a0 behaviorType:(id)a1 error:(id *)a2;
- (id)behaviorUnderstandingRecentBehaviorsOfType:(id)a0 error:(id *)a1;
- (id)behaviorUnderstandingSampleEntityTaggingFeaturesForPersonID:(id)a0 error:(id *)a1;
- (id)behaviorUnderstandingStatusWithError:(id *)a0;
- (BOOL)behaviorUnderstandingTriggerEntityTaggingDataCollectionWithError:(id *)a0;
- (BOOL)benchmarkWithError:(id *)a0;
- (BOOL)clearPipelineStatusWithError:(id *)a0;
- (void)locked_establishConnection;
- (id)photosMetadataWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(long long)a2 newestFirst:(BOOL)a3 error:(id *)a4;
- (id)resolveEntityWithRequest:(id)a0 enableSessionLogging:(BOOL)a1 configName:(id)a2 encodedConfig:(id)a3 withError:(id *)a4;
- (BOOL)runDeltaUpdatePipelineWithError:(id *)a0;
- (id)statusWithError:(id *)a0;
- (BOOL)stopPipelineWithError:(id *)a0;
- (id)triplesQueryWithQuery:(id)a0;
- (id)validateGraph:(id *)a0;
- (id)vectorSearchBenchmarkWithConfigFilePath:(id)a0 error:(id *)a1;
- (id)viewInfoWithError:(id *)a0;
- (BOOL)viewMarkNeedsUpdateWithSchedule:(id)a0 error:(id *)a1;
- (BOOL)viewRunUpdateWithName:(id)a0 error:(id *)a1;
- (BOOL)viewSetEnabledWithName:(id)a0 enabled:(id)a1 error:(id *)a2;
- (BOOL)viewValidateWithError:(id *)a0;

@end
