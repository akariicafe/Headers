@class NSCalendar, NSMutableDictionary;

@interface PLAggregationProcessor : NSObject

@property (class, readonly, nonatomic) BOOL isEnabled;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfAssetsPerMoment;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfDaysPerAggregation;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfAssetsPerAggregation;

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSMutableDictionary *curatedAssetCountByMomentUUID;

+ (void)initialize;
+ (void)restoreDefaultEnablement;
+ (void)setEnabled:(BOOL)a0;

- (BOOL)_shouldAggregateMoment:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sortedNeighborMomentClustersOfMomentClusters:(id)a0 forAllMomentClusters:(id)a1;
- (id)processAggregationsWithSortedMomentClusters:(id)a0 momentsContainedInOtherHighlights:(id)a1 progressBlock:(id /* block */)a2;
- (id)_aggregationMomentClustersForMomentClusters:(id)a0;

@end
