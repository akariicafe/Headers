@class NSString, PGPhotosChallengeMetricEventFetchHelper, PGManagerWorkingContext, PGPrecisionRecallEvaluation, NSDictionary;

@interface PGPhotosChallengeMetricEvent : PGAbstractMetricEvent {
    PGManagerWorkingContext *_workingContext;
    NSDictionary *_payload;
}

@property (nonatomic) unsigned long long algorithmVersion;
@property (nonatomic) unsigned long long graphSchemaVersion;
@property (readonly, nonatomic) NSString *photoLibrarySize;
@property (nonatomic) unsigned long long photosModelVersion;
@property (retain, nonatomic) NSString *questionTypeString;
@property (nonatomic) unsigned short questionMetricType;
@property (nonatomic) unsigned long long questionVersion;
@property (retain, nonatomic) PGPrecisionRecallEvaluation *evaluation;
@property (retain, nonatomic) PGPhotosChallengeMetricEventFetchHelper *metricsCache;

+ (id)stringFromQuestionMetricType:(unsigned short)a0;
+ (id)relationshipLabelFromRelationshipQuestionMetricType:(unsigned short)a0;
+ (id)personActivityMeaningLabelFromMeaningQuestionMetricType:(unsigned short)a0;
+ (id)meaningLabelFromMeaningQuestionMetricType:(unsigned short)a0;
+ (unsigned long long)algorithmVersionFromQuestionMetricType:(unsigned short)a0;
+ (id)allMetricEventsWithGraphManager:(id)a0;
+ (unsigned short)questionTypeFromQuestionMetricType:(unsigned short)a0;
+ (unsigned short)questionEntityTypeFromQuestionMetricType:(unsigned short)a0;

- (id)payload;
- (id)identifier;
- (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;
- (id)initWithWorkingContext:(id)a0 questionMetricType:(unsigned short)a1 metricEventFetchHelper:(id)a2;
- (void)_gatherMetricsForMeaningQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_meaningInferenceResultsForMeaningLabel:(id)a0 assetIds:(id)a1;
- (void)_gatherMetricsForPersonActivityMeaningQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_personActivityMeaningInferenceResultsForPersonActivityMeaningLabel:(id)a0 assetIds:(id)a1;
- (void)_gatherMetricsForRelationshipQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_relationshipInferenceResultsForQuestionMetricType:(unsigned short)a0 personUUIDs:(id)a1;
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
- (id)_namingInferenceResultsForContactIdentifierByPersonUUIDs:(id)a0;
- (void)_gatherMetricsForAgeCategoryQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_groundTruthForAgeCategoryFromQuestions:(id)a0;
- (id)_ageCategoryInferenceResultsForAgeCategoryByPersonUUIDs:(id)a0;
- (void)_gatherMetricsForPetQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_petInferenceResultsForAssetIds:(id)a0;
- (void)_gatherMetricsForPetKnowledgeQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (void)_gatherMetricsForMemoryQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (void)_gatherMetricsForFeaturedPhotoQuestions:(id)a0 questionMetricType:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)_groundTruthForFeaturedPhotoFromQuestions:(id)a0;
- (id)_featuredPhotoInferenceResultsForAnswerDateByAssetIds:(id)a0 questionMetricType:(unsigned short)a1;
- (void)_gatherMetricsForSyndicatedAssetsQuestions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_syndicatedAssetsGroundTruthByAssetIdentifiersFromQuestions:(id)a0;
- (id)_syndicatedAssetsInferenceResultsForAssetSyndicationIdentifiers:(id)a0;
- (id)_reasonResultByAssetSyndicationIdentifierForQuestions:(id)a0;
- (id)_syndicatedAssetFromQuestion:(id)a0;
- (id)_groundTruthByAssetIdentifiersFromQuestions:(id)a0;
- (id)_groundTruthByPersonUUIDFromQuestions:(id)a0;
- (id)payloadForVerification;
- (id)memoryCategorySubCategoryByQuestionMetricType;

@end
