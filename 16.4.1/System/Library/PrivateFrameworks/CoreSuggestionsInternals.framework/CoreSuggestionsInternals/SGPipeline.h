@class NSDictionary;

@interface SGPipeline : NSObject {
    NSDictionary *_dissectorsAndDependencies;
}

+ (void)initialize;
+ (id)fullPipeline;
+ (id)remindersTestingPipeline;
+ (id)parallelPipeline:(id)a0;
+ (id)sharedBackgroundProcessingQueue;
+ (id)dependencyClassesForDissectorClass:(Class)a0;
+ (id)retrainingPipeline;
+ (void)_delayedResetCachesAndModels;
+ (id)sharedBackgroundStorageQueue;
+ (void)_resetCachesAndModels;
+ (id)deliveriesTestingPipeline;
+ (id)emptyPipeline;
+ (id)customPipeline:(id)a0;
+ (id)remindersTestingPipelineWithCustomReminderDissector:(id)a0;

- (id)dissectOperationsForInteraction:(id)a0 entity:(id)a1 inContext:(id)a2;
- (void)dissectEntity:(id)a0 andStore:(id)a1;
- (id)storeOperation:(id)a0 spotlightBundleIdentifier:(id)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 withStore:(id)a4 dependencies:(id)a5;
- (void)dissect:(id)a0 inContext:(id)a1;
- (void)dissectAndStoreEntity:(id)a0 inContext:(id)a1;
- (void)dissectAndStore:(id)a0 inContext:(id)a1;
- (id)verificationOperation:(id)a0 withDependencies:(id)a1;
- (id)dissectOperationsForMailMessage:(id)a0 entity:(id)a1 inContext:(id)a2;
- (void)dissectAndStoreEntity:(id)a0 inContext:(id)a1 destinationStore:(id)a2;
- (id)_dissectOperations:(id)a0 block:(id /* block */)a1;
- (void)dissect:(id)a0;
- (void)_dissectEntity:(id)a0 inContext:(id)a1 andThen:(id /* block */)a2;
- (void)dissect:(id)a0 andStore:(id)a1;
- (void)logDKIMStatus:(long long)a0 forPipelineEntity:(id)a1;
- (id)_dissectOperations:(id)a0 inContext:(id)a1;
- (void)dissectAndStoreSpotlightEntity:(id)a0 bundleIdentifier:(id)a1 uniqueIdentifier:(id)a2 domainIdentifier:(id)a3 inContext:(id)a4;
- (id)verificationOperation:(id)a0 overrideVerificationStatus:(id)a1 withDependencies:(id)a2;
- (id)storeOperation:(id)a0 spotlightBundleIdentifier:(id)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 withStore:(id)a4 dependencies:(id)a5 originalEnrichmentCount:(unsigned long long)a6;
- (id)dissectOperationsForTextMessage:(id)a0 entity:(id)a1 inContext:(id)a2;
- (id)geocodeOperation:(id)a0 withDependencies:(id)a1;
- (id)dissectors;
- (id)storeOperation:(id)a0 withStore:(id)a1 dependencies:(id)a2;
- (void).cxx_destruct;
- (id)storeOperation:(id)a0 withStore:(id)a1 dependencies:(id)a2 originalEnrichmentCount:(unsigned long long)a3;

@end
