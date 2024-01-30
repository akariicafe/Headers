@class NSArray, _UIFocusSearchInfo, _UIFocusGroupMap, NSMutableArray;

@interface _UIFocusMapSearchInfo : NSObject

@property (retain, nonatomic) NSMutableArray *mutableSnapshots;
@property (retain, nonatomic) NSMutableArray *mutableDestinationRegions;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (nonatomic) BOOL didFindFocusBlockingBoundary;
@property (retain, nonatomic) NSArray *linearSortedFocusItems;
@property (retain, nonatomic) _UIFocusGroupMap *focusGroupMap;
@property (readonly, copy, nonatomic) NSArray *snapshots;
@property (readonly, copy, nonatomic) NSArray *destinationRegions;

- (void).cxx_destruct;
- (id)init;
- (void)addDestinationRegion:(id)a0;
- (void)addSnapshot:(id)a0;

@end
