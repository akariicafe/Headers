@class _CDAutoSuConfig;
@protocol _DKKnowledgeQuerying;

@interface _CDSleepForAutoSu : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain) _CDAutoSuConfig *autoSuConfig;
@property BOOL enableCaching;

+ (id)tuningDictionary;
+ (id)sanitizeTuningConfiguration:(id)a0;
+ (id)readConfigurationFromDefaults;
+ (id)defaultTuningConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)a0 referenceDate:(id)a1;
- (id)defaultTimesWhenPredictionUnavailable:(id)a0 withConfig:(id)a1;
- (id)predictedSleepDictionaryForDate:(id)a0;
- (id)initWithKnowledgeStore:(id)a0;
- (id)predictedSleepDictionaryForDate:(id)a0 usingKnowledge:(id)a1;
- (id)defaultTimesWhenPredictionUnavailable:(id)a0;
- (id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)a0;
- (id)predictForDate:(id)a0 fromState:(id)a1;
- (id)getUnlockAndSoftwareUpdateTimes;
- (id)retrieveSleepProbabilities:(id)a0;
- (id)predictForDate:(id)a0 fromState:(id)a1 withConfig:(id)a2;
- (id)predictNextDateForLastUnlockAttemptOfTheDay;
- (id)proposeTimesFromRelativeOffsetsForDate:(id)a0 lastUnlock:(int)a1 suStart:(int)a2 suEnd:(int)a3 unrestrictedSleepEnd:(int)a4 config:(id)a5;
- (id)predicitLastUnlockForDay:(id)a0;

@end
