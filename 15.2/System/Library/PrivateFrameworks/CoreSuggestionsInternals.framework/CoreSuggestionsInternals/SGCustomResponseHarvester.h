@class PETEventTracker2, NSMutableDictionary, NSFileManager, NSString, NSDate;
@protocol SGXPCActivityManagerProtocol;

@interface SGCustomResponseHarvester : NSObject {
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
    PETEventTracker2 *_pet2tracker;
    NSFileManager *_fManager;
    NSString *_checkpointFullPath;
    NSString *_preferredLanguage;
    int _customResponsesStep;
    NSDate *_latestProcessedDate;
    unsigned long long _batchSize;
    NSString *_modelFilePath;
    NSString *_modelConfigPath;
}

@property (readonly, nonatomic) NSMutableDictionary *modelExistsForLanguage;

+ (void)clearCustomResponsesCheckpointForTesting;
+ (void)runHarvestSkipMessageCollection:(BOOL)a0 clearCheckpoint:(BOOL)a1 reportMetrics:(BOOL)a2;

- (void).cxx_destruct;
- (void)harvestWithActivity:(id)a0;
- (id)initWithActivityManager:(id)a0;
- (id)_customResponseParametersWithExperiment:(id)a0;
- (id)_getCustomResponseParameters;
- (void)loadCustomResponsesCheckpoint;
- (void)writeCheckpoint;
- (BOOL)isSupportedLanguage:(id)a0;
- (id)modelForLanguage:(id)a0;
- (unsigned long long)activityStateAfterFilterWithStore:(id)a0 forActivity:(id)a1 andCustomResponseParameters:(id)a2;
- (BOOL)deferAfterWriteCheckpointForActivity:(id)a0;
- (void)setPet2TrackerForTesting:(id)a0;
- (void)setCustomResponsesStepForTesting:(int)a0;
- (int)getCustomResponsesStepForTesting;
- (void)setCustomResponsesLatestProcessedDateForTesting:(id)a0;
- (id)getCustomResponsesLatestProcessedDateForTesting;

@end
