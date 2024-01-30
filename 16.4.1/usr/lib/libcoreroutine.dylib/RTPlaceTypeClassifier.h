@class RTMapServiceManager, RTPlatform, RTMapsSupportManager, NSObject, RTContactsManager, RTDistanceCalculator, RTLearnedLocationStore, RTPlaceTypeClassifierMetricsCalculator;
@protocol OS_dispatch_queue;

@interface RTPlaceTypeClassifier : NSObject

@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)classifyWithError:(id *)a0;
- (id)coalescePlacesFromExperts:(id)a0;
- (void)donateInferredPlaces:(id)a0;
- (id)getClassificationsFromExperts:(id)a0 error:(id *)a1;
- (id)getExperts;
- (id)getStoredPlacesWithError:(id *)a0;
- (id)initWithContactsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2 mapServiceManager:(id)a3 mapsSupportManager:(id)a4 placeTypeClassifierMetricsCalculator:(id)a5 platform:(id)a6 queue:(id)a7;
- (BOOL)isRottedMeCard:(id)a0 inferredPlace:(id)a1;
- (id)mergeExistingPlaces:(id)a0 intoUpdatedPlace:(id)a1 typesInMeCard:(id)a2;
- (BOOL)processExpertClassifications:(id)a0 error:(id *)a1;
- (id)replaceBusinessMapItemWithReverseGeocodedMapItemForHome:(id)a0;
- (BOOL)updatePlaces:(id)a0 error:(id *)a1;

@end
