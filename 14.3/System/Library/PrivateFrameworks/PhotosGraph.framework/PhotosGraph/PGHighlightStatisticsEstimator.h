@class NSDictionary, PGManager, NSString;

@interface PGHighlightStatisticsEstimator : NSObject

@property (retain) PGManager *manager;
@property (readonly, nonatomic) NSDictionary *highlightEstimatesDictionary;
@property (readonly, nonatomic) NSString *highlightEstimatesDescription;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (id)highlightEstimatesDescription;
- (id)_createHighlightEstimatesDictionary;
- (BOOL)_isUtilityAsset:(id)a0;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)a0;
- (id)_collectDetailsForTripsAndWeekends:(id)a0;
- (id)_collectDetailsForAggregations:(id)a0;
- (id)_highlightEstimatesDescriptionWithData:(id)a0;
- (id)_stringDescriptionForTripWeekendDetails:(id)a0;
- (id)_stringDescriptionForHomeWorkAggregations:(id)a0;
- (id)_stringDescriptionForMomentsDetails:(id)a0;

@end
