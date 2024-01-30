@class PLFrequentLocationManager, NSCalendar, PLLocalCreationDateCreator;
@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (weak, nonatomic) id<PLLibraryClustererDelegate> delegate;

- (void)_createMomentsForDailyAssets:(id)a0 currentMomentExistingMomentData:(id)a1;
- (void).cxx_destruct;
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)a0;
- (id)_momentsSeparatedOnLocationTypeWithMoments:(id)a0;
- (id)_momentsSplitWithinDayWithMoments:(id)a0;
- (id)initWithLocalCreationDateCreator:(id)a0 frequentLocationManager:(id)a1;
- (BOOL)_shouldSplitMomentsWithTimeDistance:(double)a0 locationDistance:(double)a1;
- (id)_startDateComponentsForMomentCluster:(id)a0;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)a0;
- (void)processMonthsAndYearsForMomentClusters:(id)a0;
- (void)processMomentsWithAssets:(id)a0;
- (id)_momentsWithLocationClusteredByPossibleSource:(id)a0;
- (id)momentClustersForMomentsSortedByDate:(id)a0;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)a0 clusters:(id)a1;

@end
