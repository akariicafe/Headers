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
@property (readonly, nonatomic) BOOL hasOnlyStaticContent;

- (id)init;
- (void)addSnapshot:(id)a0;
- (void).cxx_destruct;
- (void)addDestinationRegion:(id)a0;

@end
