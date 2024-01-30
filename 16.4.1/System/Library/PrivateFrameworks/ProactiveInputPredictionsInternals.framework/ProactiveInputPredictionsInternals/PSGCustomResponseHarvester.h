@class PETEventTracker2, NSMutableDictionary, NSFileManager, NSString, NSDate;
@protocol SGXPCActivityManagerProtocol;

@interface PSGCustomResponseHarvester : NSObject {
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
    NSString *_modelVocabPath;
    NSString *_storeDirectory;
}

@property (readonly, nonatomic) NSMutableDictionary *modelExistsForLanguage;

+ (void)clearCustomResponsesCheckpointForTesting;
+ (void)runHarvestSkipMessageCollection:(BOOL)a0 clearCheckpoint:(BOOL)a1 reportMetrics:(BOOL)a2 modelConfigPath:(id)a3 modelVocabPath:(id)a4 modelFilePath:(id)a5 storeDirectory:(id)a6 evalFraction:(id)a7;

- (void).cxx_destruct;
- (BOOL)isSupportedLanguage:(id)a0;
- (void)harvestWithActivity:(id)a0;
- (id)modelForLanguage:(id)a0;
- (void)writeCheckpoint;
- (id)_customResponseParametersWithConfigPath:(id)a0;
- (id)_customResponseParametersWithExperiment:(id)a0;
- (id)_getCustomResponseParameters;
- (unsigned long long)activityStateAfterFilterWithStore:(id)a0 forActivity:(id)a1 andCustomResponseParameters:(id)a2;
- (BOOL)deferAfterWriteCheckpointForActivity:(id)a0;
- (id)getCustomResponsesLatestProcessedDateForTesting;
- (int)getCustomResponsesStepForTesting;
- (id)initWithActivityManager:(id)a0;
- (id)initWithActivityManager:(id)a0 modelConfigPath:(id)a1 modelVocabPath:(id)a2 modelFilePath:(id)a3 storeDirectory:(id)a4;
- (void)loadCustomResponsesCheckpoint;
- (void)setCustomResponsesLatestProcessedDateForTesting:(id)a0;
- (void)setCustomResponsesStepForTesting:(int)a0;
- (void)setPet2TrackerForTesting:(id)a0;

@end
