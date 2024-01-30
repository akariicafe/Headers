@class NSDictionary, PGManagerWorkingContext;

@interface PGHighlightStatisticsEstimator : NSObject {
    PGManagerWorkingContext *_workingContext;
    NSDictionary *_highlightEstimatesDictionary;
}

- (void).cxx_destruct;
- (id)_collectDetailsForAggregations:(id)a0 inGraph:(id)a1 curationContext:(id)a2;
- (id)_collectDetailsForTripsAndWeekends:(id)a0 inGraph:(id)a1 curationContext:(id)a2;
- (id)_createHighlightEstimatesDictionaryWithCurationContext:(id)a0;
- (id)_highlightEstimatesDescriptionWithData:(id)a0;
- (BOOL)_isUtilityAsset:(id)a0;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)a0;
- (id)_stringDescriptionForHomeWorkAggregations:(id)a0;
- (id)_stringDescriptionForMomentsDetails:(id)a0;
- (id)_stringDescriptionForTripWeekendDetails:(id)a0;
- (id)highlightEstimatesDescriptionWithCurationContext:(id)a0;
- (id)highlightEstimatesDictionaryWithCurationContext:(id)a0;
- (id)initWithWorkingContext:(id)a0;

@end
