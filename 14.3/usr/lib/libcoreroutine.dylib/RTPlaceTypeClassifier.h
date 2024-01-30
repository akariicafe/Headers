@class RTLearnedLocationAlgorithmMetricCalculator, RTPlatform, RTMapsSupportManager, NSObject, RTContactsManager, RTDistanceCalculator, RTLearnedLocationStore, RTMapServiceManager;
@protocol OS_dispatch_queue;

@interface RTPlaceTypeClassifier : NSObject

@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTLearnedLocationAlgorithmMetricCalculator *algorithmMetricCalculator;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAlgorithmMetricCalculator:(id)a0 contactsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationStore:(id)a3 mapServiceManager:(id)a4 mapsSupportManager:(id)a5 platform:(id)a6 queue:(id)a7;
- (BOOL)classifyWithError:(id *)a0;
- (BOOL)isRottedMeCard:(id)a0 inferredPlace:(id)a1;
- (id)replaceBusinessMapItemWithReverseGeocodedMapItemForHome:(id)a0;
- (void)donateInferredPlaces:(id)a0;
- (id)coalescePlacesFromExperts:(id)a0;
- (id)getExistingClassifiedPlacesWithError:(id *)a0;
- (id)mergeExistingPlaces:(id)a0 intoUpdatedPlace:(id)a1 typesInMeCard:(id)a2;
- (BOOL)updatePlaces:(id)a0 error:(id *)a1;
- (id)getExperts;
- (id)getClassificationsFromExperts:(id)a0 error:(id *)a1;
- (BOOL)processExpertClassifications:(id)a0 error:(id *)a1;

@end
