@class _UIFocusGroupMap, _UIFocusMapSearchInfo, UIFocusSystem, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

@interface _UIFocusMap : NSObject {
    BOOL _minimumSearchAreaIsEmpty;
    BOOL _trackingSearchInfo;
    BOOL _needsSearchInfo;
    BOOL _ignoresRootContainerClippingRect;
}

@property (readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo;
@property (readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> rootContainer;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) _UIFocusGroupMap *focusGroupMap;
@property (readonly, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } minimumSearchArea;

- (id)init;
- (void).cxx_destruct;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inRegions:(id)a1 withSnapshot:(id)a2;
- (id)_allDefaultFocusableRegionsInContainer:(id)a0 intersectingRegion:(id)a1;
- (id)_allFocusableItemsInEnvironment:(id)a0;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingSearches;
- (id)_closestFocusableItemToPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 excludingItems:(id)a2 distanceMeasuringUnitPoint:(struct CGPoint { double x0; double x1; })a3;
- (id)_defaultMapSnapshotter;
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)a0;
- (id)_inferredDefaultFocusItemInEnvironment:(id)a0;
- (id)_linearlySortedFocusItemsForItems:(id)a0 groupFilter:(long long)a1 itemStandInMap:(id)a2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 startingFromRegion:(id)a1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 startingFromRegion:(id)a1 inRegions:(id)a2 withSnapshot:(id)a3;
- (id)_nextFocusedItemForLinearFocusMovementRequest:(id)a0 startingFromRegion:(id)a1 inRegions:(id)a2 withSnapshot:(id)a3;
- (id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)a0 startingFromRegion:(id)a1 inRegions:(id)a2 withSnapshot:(id)a3;
- (id)_stopTrackingSearches;
- (void)_trackExternalSnapshot:(id)a0;
- (void)diagnoseFocusabilityForItem:(id)a0 report:(id)a1;
- (id)initWithFocusSystem:(id)a0 rootContainer:(id)a1;
- (id)initWithFocusSystem:(id)a0 rootContainer:(id)a1 coordinateSpace:(id)a2 searchInfo:(id)a3 ignoresRootContainerClippingRect:(BOOL)a4;
- (BOOL)verifyFocusabilityForItem:(id)a0;

@end
