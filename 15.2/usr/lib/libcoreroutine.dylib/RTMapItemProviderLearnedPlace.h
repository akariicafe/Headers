@class RTLearnedLocationStore, NSString, RTMapItemProviderLearnedPlaceParameters;

@interface RTMapItemProviderLearnedPlace : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, copy, nonatomic) RTMapItemProviderLearnedPlaceParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adjustConfidenceAndCollectMetrics:(id)a0 learnedPlace:(id)a1 maxConfidence:(double)a2;
- (double)confidenceForPlaceType:(unsigned long long)a0;
- (id)learnedPlaceForInferredMapItem:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2 parameters:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2;
- (unsigned long long)coalescedMapItemSourceForPlace:(id)a0;

@end
