@class NSArray, NSMutableArray, NSMutableSet;

@interface IPFeatureScanner : NSObject

@property (retain) NSArray *bodyMessageUnits;
@property (retain) NSMutableArray *bodyAllFeatures;
@property (retain) NSMutableArray *bodyDataDetectorsFeatures;
@property (retain) NSMutableArray *bodyKeywordFeatures;
@property (retain) NSMutableArray *bodySentenceFeatures;
@property (retain) NSMutableArray *detectedEvents;
@property (retain) NSArray *stitchedEvents;
@property (retain) NSArray *filteredDetectedEvents;
@property long long resultType;
@property (retain) NSMutableSet *extractedNotesStrings;

+ (void)resetSharedCachesAndModels;
+ (BOOL)isNaturalLanguageEventDetectionEnabled;
+ (void)setEventStoreForTesting:(id)a0;
+ (id)dataDetectorsFeatureExtractor;
+ (id)keywordFeatureExtractor;
+ (id)sentenceFeatureExtractor;
+ (id)descriptionForScanResultType:(long long)a0;

- (void).cxx_destruct;
- (void)scanEventsInMessageUnits:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_featureWithClass:(Class)a0 inFeatures:(id)a1 atIndex:(unsigned long long)a2;
- (id)_sortedFeaturesByDistance:(id)a0 aroundRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)_distanceBetweenFeature:(id)a0 andFeature:(id)a1;
- (id)_featureSentenceInFeatures:(id)a0 atIndex:(unsigned long long)a1;
- (id)dataFeaturesInTheFutureFromDataFeatures:(id)a0 messageUnitSentDate:(id)a1;
- (BOOL)isDateRoundedTo5Minutes:(id)a0;
- (id)_nearbyFeatureSentences:(id)a0 fromFeatureAtIndex:(unsigned long long)a1 messageUnit:(id)a2;
- (id)_stitchedEventsFromEvents:(id)a0;
- (id)_regroupEventsWithSpreadTimeAsAllDayEvents:(id)a0;
- (void)adjustTimeForEvent:(id)a0;
- (id)stringsFromDataFeatures:(id)a0 matchingTypes:(id)a1;
- (id)normalizedAllDayDateFromDate:(id)a0;
- (id)movieTitlesFromDataFeatures:(id)a0;
- (id)sportTeamNamesFromDataFeatures:(id)a0;
- (id)artisNamesFromDataFeatures:(id)a0;
- (id)restaurantAndBarPOINamesFromDataFeatures:(id)a0;
- (id)entertainmentPOINamesFromDataFeatures:(id)a0;
- (BOOL)isDateAroundNoon:(id)a0;
- (id)decoratedTitle:(id)a0 withSubtitles:(id)a1;
- (id)decoratedTitleFromEventType:(id)a0 title:(id)a1 sender:(id)a2 recipients:(id)a3 isSent:(BOOL)a4;
- (double)confidenceForEvent:(id)a0 baseConfidence:(double)a1;
- (id)analyzeFeatures:(id)a0 messageUnit:(id)a1 checkPolarity:(BOOL)a2 polarity:(unsigned long long)a3;
- (BOOL)isEventProposalOrConfirmationFromFeatures:(id)a0 fromFeatureAtIndex:(unsigned long long)a1 messageUnit:(id)a2 eventIsTenseDependent:(BOOL)a3 extractedFromSubject:(BOOL)a4 extractedPolarity:(unsigned long long *)a5 polarityInfluencedByIpsosPlistRef:(BOOL *)a6;
- (unsigned long long)eventStatusFromPolarity:(unsigned long long)a0;
- (id)_nearbyFeatureDatas:(id)a0 fromFeatureAtIndex:(unsigned long long)a1 messageUnit:(id)a2;
- (id)notesStringsFromDataFeatures:(id)a0;
- (id)cleanedStringForFeatureData:(id)a0;
- (id)shortNameForPerson:(id)a0;
- (void)resetScanState;
- (id)_sortedFeaturesByRange:(id)a0;
- (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1 extractors:(id)a2 context:(id)a3;
- (id)_featureDataInFeatures:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)shouldReplaceSendDateWithCurrentDate;
- (void)augmentDetectedDatesWithEndDates:(id)a0;
- (unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)a0 inFeatures:(id)a1;
- (unsigned long long)countOfFeaturesContainDateInTheFuture:(id)a0 messageUnitSentDate:(id)a1;
- (BOOL)dataFeatures:(id)a0 containDateOlderThan:(id)a1 preciseTimeOnly:(BOOL)a2;
- (id)subjectEventVocabularyRejectionKeyword:(id)a0;
- (id)subjectEventVocabularyIgnoreDateKeyword:(id)a0;
- (id)stitchedEventsFromEvents:(id)a0;
- (void)adjustTimeForEvents:(id)a0;
- (id)filteredEventsForDetectedEvents:(id)a0 referenceDate:(id)a1;
- (void)normalizedEvents:(id)a0;
- (id)bestEventsFromEvents:(id)a0;
- (void)enrichEvents:(id)a0 messageUnits:(id)a1 dateInSubject:(id)a2 dataFeatures:(id)a3;
- (id)messageSenderName;
- (void)confidenceForEvents:(id)a0;
- (id)analyzeFeatures:(id)a0 messageUnit:(id)a1;

@end
