@interface HDOnboardingCompletionEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteAllCompletionsForFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertOnboardingCompletion:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 transaction:(id)a2 error:(id *)a3;

- (id)onboardingCompletionWithTransaction:(id)a0 error:(id *)a1;

@end
