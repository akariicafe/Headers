@class PLFrequentLocationManager, NSCalendar, PLLocalCreationDateCreator;
@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (weak, nonatomic) id<PLLibraryClustererDelegate> delegate;

- (id)_startDateComponentsForMomentCluster:(id)a0;
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)a0;
- (id)_momentsSeparatedOnLocationTypeWithMoments:(id)a0;
- (BOOL)_shouldSplitMomentsWithTimeDistance:(double)a0 locationDistance:(double)a1;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)a0 clusters:(id)a1;
- (id)_momentsWithLocationClusteredByPossibleSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalCreationDateCreator:(id)a0 frequentLocationManager:(id)a1;
- (void)processMomentsWithAssets:(id)a0;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)a0;
- (void)_createMomentsForDailyAssets:(id)a0 currentMomentExistingMomentData:(id)a1;
- (id)_momentsSplitWithinDayWithMoments:(id)a0;
- (id)momentClustersForMomentsSortedByDate:(id)a0;
- (id)_momentsSplitBetweenOriginatorsWithMoments:(id)a0;

@end
