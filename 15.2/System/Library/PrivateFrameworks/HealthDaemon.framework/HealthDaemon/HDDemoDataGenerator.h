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

- (id)gregorianCalendar;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (id)currentDateFromCurrentTime:(double)a0;
- (BOOL)isDemoDataTimeInWeekend:(double)a0 calendar:(id)a1;
- (id)firstSampleDate;
- (long long)firstSampleDayOfYear;
- (id)initWithProfile:(id)a0 configuration:(id)a1 queue:(id)a2;
- (void)generateThroughEndDate:(id)a0 completion:(id /* block */)a1;

@end
