@class NSDictionary, NSString, PGManagerWorkingContext;

@interface PGHighlightStatisticsEstimator : NSObject {
    PGManagerWorkingContext *_workingContext;
}

@property (readonly, nonatomic) NSDictionary *highlightEstimatesDictionary;
@property (readonly, nonatomic) NSString *highlightEstimatesDescription;

- (void).cxx_destruct;
- (id)initWithWorkingContext:(id)a0;
- (id)highlightEstimatesDescription;
- (id)_createHighlightEstimatesDictionary;
- (BOOL)_isUtilityAsset:(id)a0;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)a0;
- (id)_collectDetailsForTripsAndWeekends:(id)a0 inGraph:(id)a1;
- (id)_collectDetailsForAggregations:(id)a0 inGraph:(id)a1;
- (id)_highlightEstimatesDescriptionWithData:(id)a0;
- (id)_stringDescriptionForTripWeekendDetails:(id)a0;
- (id)_stringDescriptionForHomeWorkAggregations:(id)a0;
- (id)_stringDescriptionForMomentsDetails:(id)a0;

@end
