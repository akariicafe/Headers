@interface SGMISubmodelsManager : NSObject

+ (void)checkForAndProcessVersionChange;
+ (void)pruneDB;
+ (void)addSubmodelStatsToLog:(id)a0;
+ (void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)a0 store:(id)a1 shouldContinue:(id /* block */)a2 finalGroundTruthDate:(id)a3 withSimulatedCSSearchableItemForTesting:(id)a4 limit:(unsigned long long)a5;
+ (void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)a0 store:(id)a1 shouldContinue:(id /* block */)a2 finalGroundTruthDate:(id)a3 withSimulatedCSSearchableItemForTesting:(id)a4 limit:(unsigned long long)a5 log:(id)a6;
+ (void)incrementalSubmodelUpdateWithStore:(id)a0 limit:(unsigned long long)a1 log:(id)a2;
+ (void)incrementalSubmodelUpdateWithStore:(id)a0 shouldContinue:(id /* block */)a1 limit:(unsigned long long)a2 log:(id)a3;
+ (void)purgeDeletedEmailsReferencesFromStore:(id)a0;
+ (void)purgeOldTokensFromStore:(id)a0;
+ (void)purgeTokensToMatchCappingPolicyFromStore:(id)a0;

@end
