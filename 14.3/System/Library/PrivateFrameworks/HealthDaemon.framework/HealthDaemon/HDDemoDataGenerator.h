@class HDDemoDataMobilitySampleGenerator, HDDemoDataSymptomsSampleGenerator, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataOtherAndAdditionalSampleGenerator, HDDemoDataGeneratorConfiguration, NSCalendar, NSArray, HDDemoDataBodySampleGenerator, NSMutableDictionary, HDDemoDataBloodSampleGenerator, HDDemoDataAudioExposureSampleGenerator, HDDemoDataPerson, NSObject, HDDemoDataMindfulnessSampleGenerator, HDDemoDataActivitySampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataHeartSampleGenerator, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataAudiogramSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataVitalsSampleGenerator, HDProfile, HDDemoDataFoodSampleGenerator, HDDemoDataGeneratorState;
@protocol OS_dispatch_queue;

@interface HDDemoDataGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sampleGenerators;
    NSMutableDictionary *_appProvenances;
    NSCalendar *_gregorianCalendar;
    long long _numHKSamples;
    BOOL _isGeneratingDemoData;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDemoDataPerson *demoPerson;
@property (retain, nonatomic) HDDemoDataGeneratorConfiguration *configuration;
@property (retain, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator;
@property (retain, nonatomic) HDDemoDataAudioExposureSampleGenerator *audioExposureSampleGenerator;
@property (retain, nonatomic) HDDemoDataAudiogramSampleGenerator *audiogramSampleGenerator;
@property (retain, nonatomic) HDDemoDataBloodSampleGenerator *bloodSampleGenerator;
@property (retain, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator;
@property (retain, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator;
@property (retain, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator;
@property (retain, nonatomic) HDDemoDataHeartSampleGenerator *heartSampleGenerator;
@property (retain, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator;
@property (retain, nonatomic) HDDemoDataMobilitySampleGenerator *mobilitySampleGenerator;
@property (retain, nonatomic) HDDemoDataOtherAndAdditionalSampleGenerator *otherAndAdditionalSampleGenerator;
@property (retain, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator;
@property (retain, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator;
@property (retain, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator;
@property (retain, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator;
@property (retain, nonatomic) HDDemoDataSymptomsSampleGenerator *symptomsSampleGenerator;
@property (retain, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator;
@property (readonly, nonatomic) HDDemoDataGeneratorState *generatorState;

- (id)init;
- (void).cxx_destruct;
- (id)gregorianCalendar;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (id)_keyValueDomain;
- (BOOL)isDemoDataTimeInWeekend:(double)a0 calendar:(id)a1;
- (id)currentDateFromCurrentTime:(double)a0;
- (id)firstSampleDate;
- (long long)firstSampleDayOfYear;
- (id)initWithProfile:(id)a0 configuration:(id)a1 queue:(id)a2;
- (void)_queue_runDemoDataGeneratorForDemoPerson:(id)a0 endDate:(id)a1 completion:(id /* block */)a2;
- (void)_archiveCurrentState;
- (BOOL)_queue_loadDemoDataSampleGeneratorState;
- (void)_queue_initDemoDataSampleGenerators;
- (void)_insertBiographicalDataFromDemoPerson:(id)a0;
- (void)_insertMedicalIDForDemoPerson:(id)a0;
- (double)_initialGenerationTimeWithDate:(id)a0;
- (double)_timeIntervalFromInitialGenerationPeriod:(long long)a0 currentDate:(id)a1;
- (void)_queue_generateDataForDemoPerson:(id)a0 startDate:(id)a1 endDate:(id)a2 firstRun:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_phoneProveance;
- (BOOL)_queue_unarchiveState;
- (void)_queue_setupDemoDataSampleGenerators;
- (void)_queue_generateFirstRunDataForDemoPerson:(id)a0;
- (void)_queue_generateDataForDemoPerson:(id)a0 numIntervals:(long long)a1;
- (void)_insertIntoDatabaseObjectCollection:(id)a0 fromPerson:(id)a1;
- (void)_updateWorkoutConfigurationInGeneratorStateWithSampleDate:(id)a0;
- (BOOL)isDifferentDayFromTime:(double)a0;
- (id)_watchProvenanceWithPerson:(id)a0;
- (id)_appProvenanceWithBundleIdentifier:(id)a0;
- (id)_appSourceWithBundleIdentifier:(id)a0;
- (id)_workoutPrototypesIfEnsureRecentWorkoutHasRouteIsYes;
- (BOOL)_archiveObject:(id)a0 error:(id *)a1;
- (id)_unarchiveDataWithClass:(Class)a0 error:(id *)a1;
- (void)generateThroughEndDate:(id)a0 completion:(id /* block */)a1;

@end
