@class NSString, NSNumber, NSMutableArray;

@interface MKCuratedCollectionsPlacecardAnalyticsManager : NSObject <MKCuratedCollectionsPlacecardAnalytics> {
    struct CollectionsPlacecardEvent { int action; NSString *value; NSNumber *collectionId; NSNumber *collectionCurrentlySaved; NSNumber *horizontalIndex; int target; int cardType; NSMutableArray *possibleActions; NSMutableArray *impossibleActions; NSNumber *verticalIndex; } _event;
}

- (void)logEvent;
- (void)cleanUp;
- (void).cxx_destruct;
- (void)placecardCollectionsScrollForward;
- (void)placecardCollectionsScrollBackward;
- (void)placecardCollectionTapped:(id)a0 atIndex:(unsigned long long)a1 isCurrentlySaved:(BOOL)a2;
- (void)placecardCollectionsSeeAllTapped;
- (void)placecardExploreGuidesButtonTapped;
- (id)init;

@end
