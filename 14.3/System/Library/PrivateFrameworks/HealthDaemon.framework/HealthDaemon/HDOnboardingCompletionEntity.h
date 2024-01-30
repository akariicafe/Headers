@interface HDOnboardingCompletionEntity : HDHealthEntity

+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)_deleteEntitiesWithUUIDs:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)databaseTable;
+ (id)_deletedEntityWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_onboardingCompletionWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertOnboardingCompletion:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)_enumerateAllOnboardingCompletionModelsWithTransaction:(id)a0 predicate:(id)a1 orderedByProperty:(id)a2 ascending:(BOOL)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)_hasNoEquivalentCompletionForOnboardingCompletion:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)propertyForSyncProvenance;
+ (id)insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)_insertEntityWithUUID:(id)a0 featureIdentifier:(id)a1 version:(long long)a2 completionDate:(id)a3 countryCode:(id)a4 modificationDate:(id)a5 deleted:(BOOL)a6 syncProvenance:(long long)a7 transaction:(id)a8 error:(id *)a9;
+ (id)_onboardingCompletionsForHighestVersion:(BOOL)a0 featureIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)deleteAllCompletionsForFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)_insertCodableOnboardingCompletion:(id)a0 syncProvenance:(long long)a1 transaction:(id)a2 changedFeatureIdentifier:(id *)a3 error:(id *)a4;
+ (long long)protectionClass;

- (id)onboardingCompletionWithTransaction:(id)a0 error:(id *)a1;

@end
