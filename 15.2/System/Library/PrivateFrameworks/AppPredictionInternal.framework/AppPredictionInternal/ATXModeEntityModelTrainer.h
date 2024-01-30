@class NSString, ATXModeEntityModelTrainingContext;

@interface ATXModeEntityModelTrainer : NSObject {
    NSString *_cacheBasePath;
    ATXModeEntityModelTrainingContext *_trainingContext;
}

+ (id)eventProviderForMode:(unsigned long long)a0;
+ (double)scoreThresholdGivenModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1;
+ (id)thresholdedModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 threshold:(double)a2;
+ (double)maxScoreWithThresholdGivenModeEntityScores:(id)a0;
+ (id)eventProviderForScorableTime:(id)a0;

- (id)initWithCacheBasePath:(id)a0;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1;
- (void)train;
- (void).cxx_destruct;
- (id)init;
- (void)trainWithXPCActivity:(id)a0 shouldSkipRetrainingIfTrainedRecently:(BOOL)a1 shouldDeferTrainingOnRestoreOrUpgrade:(BOOL)a2;
- (BOOL)shouldDeferTrainingDueToRestoredBackup;
- (BOOL)shouldDeferTrainingDueToUpgrade;
- (BOOL)persistModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 modeIdentifier:(id)a2;
- (void)trainWithShouldDeferTrainingOnBackupRestoreOrUpgrade:(BOOL)a0;
- (void)trainWithXPCActivity:(id)a0;

@end
