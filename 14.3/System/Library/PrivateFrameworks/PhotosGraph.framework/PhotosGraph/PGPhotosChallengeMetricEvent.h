@class NSString, PGPhotosChallengeMetricEventFetchHelper, NSDictionary, PGPrecisionRecallEvaluation, PGManager;

@interface PGPhotosChallengeMetricEvent : NSObject <PLMetricEvent>

@property (retain, nonatomic) PGManager *manager;
@property (nonatomic) unsigned long long algorithmVersion;
@property (nonatomic) unsigned long long graphSchemaVersion;
@property (readonly, nonatomic) NSString *photoLibrarySize;
@property (nonatomic) unsigned long long photosModelVersion;
@property (retain, nonatomic) NSString *questionTypeString;
@property (nonatomic) unsigned short questionMetricType;
@property (nonatomic) unsigned long long questionVersion;
@property (retain, nonatomic) PGPrecisionRecallEvaluation *evaluation;
@property (retain, nonatomic) PGPhotosChallengeMetricEventFetchHelper *metricsCache;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromQuestionMetricType:(unsigned short)a0;
+ (id)relationshipLabelFromRelationshipQuestionMetricType:(unsigned short)a0;
+ (id)meaningLabelFromMeaningQuestionMetricType:(unsigned short)a0;
+ (unsigned long long)algorithmVersionFromQuestionMetricType:(unsigned short)a0;
+ (id)allMetricEventsWithGraphManager:(id)a0;
+ (unsigned short)questionTypeFromQuestionMetricType:(unsigned short)a0;
+ (unsigned short)questionEntityTypeFromQuestionMetricType:(unsigned short)a0;

- (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;
- (id)initWithGraphManager:(id)a0 questionMetricType:(unsigned short)a1 metricEventFetchHelper:(id)a2;
- (void)_gatherMetricsForMeaningQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_meaningInferenceResultsForMeaningLabel:(id)a0 assetIds:(id)a1;
- (void)_gatherMetricsForRelationshipQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_relationshipInferenceResultsForQuestionMetricType:(unsigned short)a0 personIds:(id)a1;
- (void)_gatherMetricsForBusinessQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_groundTruthForBusinessFromQuestions:(id)a0;
- (id)_businessInferenceResultsForBusinessIdByAssetIds:(id)a0;
- (void)_gatherMetricsForPublicEventQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_groundTruthForPublicEventFromQuestions:(id)a0;
- (id)_publicEventInferenceResultsForPublicEventIdByAssetIds:(id)a0;
- (void)_gatherMetricsForTripKeyQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (void)_gatherMetricsForHolidayQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_groundTruthForHolidayFromQuestions:(id)a0;
- (id)_holidayInferenceResultsForHolidayNameByAssetIds:(id)a0;
- (void)_gatherMetricsForFrequentLocationQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_groundTruthForFrequentLocationFromQuestions:(id)a0;
- (id)_frequentLocationInferenceResultsForLocationByAssetIds:(id)a0 locationType:(id)a1;
- (void)_gatherMetricsForNamingQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_groundTruthForNamingFromQuestions:(id)a0;
- (id)_namingInferenceResultsForContactIdByPersonIds:(id)a0;
- (void)_gatherMetricsForAgeCategoryQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_groundTruthForAgeCategoryFromQuestions:(id)a0;
- (id)_ageCategoryInferenceResultsForAgeCategoryByPersonIds:(id)a0;
- (void)_gatherMetricsForPetQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_petInferenceResultsForAssetIds:(id)a0;
- (void)_gatherMetricsForPetKnowledgeQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (void)_gatherMetricsForMemoryQuestions:(id)a0 fromGraph:(id)a1 questionMetricType:(unsigned short)a2 progressBlock:(id /* block */)a3;
- (void)_gatherMetricsForFeaturedPhotoQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_groundTruthForFeaturedPhotoFromQuestions:(id)a0;
- (id)_featuredPhotoInferenceResultsForAnswerDateByAssetIds:(id)a0 questionMetricType:(unsigned short)a1;
- (id)_groundTruthByAssetIdentifiersFromQuestions:(id)a0;
- (id)_groundTruthByPersonIdentifiersFromQuestions:(id)a0;
- (id)payloadForVerification;
- (id)memoryCategorySubCategoryByQuestionMetricType;

@end
