@class PETEventTracker2, NSFileManager, NSString, NSMutableDictionary, NSDate;
@protocol SGXPCActivityManagerProtocol;

@interface SGCustomResponseHarvester : NSObject {
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
    PETEventTracker2 *_pet2tracker;
    NSFileManager *_fManager;
    NSString *_checkpointFullPath;
    NSString *_preferredLanguage;
    int _customResponsesStep;
    NSDate *_latestProcessedDate;
    NSString *_modelFilePath;
    NSString *_modelConfigPath;
    NSMutableDictionary *_modelExistsForLanguage;
}

+ (void)clearCustomResponsesCheckpointForTesting;
+ (void)runHarvestForTestingSkipMessageCollection:(BOOL)a0 clearCheckpoint:(BOOL)a1 reportMetrics:(BOOL)a2;

- (void).cxx_destruct;
- (void)harvestWithActivity:(id)a0;
- (id)initWithActivityManager:(id)a0;
- (id)customResponseParametersForTrial:(id)a0;
- (id)_customResponseParametersWithExperimentResolver:(id)a0;
- (id)_getCustomResponseParameters;
- (void)loadCustomResponsesCheckpoint;
- (BOOL)deferAfterWriteCheckpointForActivity:(id)a0;
- (BOOL)isSupportedLanguage:(id)a0;
- (id)modelForLanguage:(id)a0;
- (BOOL)deferAfterFilterWithStore:(id)a0 forActivity:(id)a1 andCustomResponseParameters:(id)a2;
- (void)setPet2TrackerForTesting:(id)a0;
- (void)setCustomResponsesStepForTesting:(int)a0;
- (int)getCustomResponsesStepForTesting;
- (void)setCustomResponsesLatestProcessedDateForTesting:(id)a0;
- (id)getCustomResponsesLatestProcessedDateForTesting;

@end
