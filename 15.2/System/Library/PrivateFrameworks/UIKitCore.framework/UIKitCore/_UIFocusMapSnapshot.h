@class NSHashTable, NSString, NSArray, UIFocusSystem, _UIFocusSearchInfo, _UIFocusMapSnapshotDebugInfo, NSMutableArray, UIScreen, _UIFocusRegion;
@protocol UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    NSMutableArray *_containersBeingAdded;
    NSMutableArray *_containersBeingAddedFocusSystems;
    NSMutableArray *_clippingRectsBeingAdded;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    NSArray *_regions;
    struct { unsigned char didCaptureSnapshot : 1; unsigned char isSearchingRegionsOfInterestContainer : 1; unsigned char clipToSnapshotRect : 1; unsigned char ignoresRootContainerClippingRect : 1; } _flags;
}

@property (readonly, nonatomic, getter=_debugInfo) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (readonly, nonatomic, getter=_searchArea) id<_UIFocusMapArea> searchArea;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> rootContainer;
@property (readonly, nonatomic) id<_UIFocusMapArea> mapArea;
@property (readonly, copy, nonatomic) _UIFocusRegion *focusedRegion;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> regionsContainer;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, copy, nonatomic) NSArray *originalRegions;
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (void)_capture;
- (id)searchArea;
- (void)addRegion:(id)a0;
- (void).cxx_destruct;
- (void)addRegionsInContainer:(id)a0;
- (id)init;
- (id)regionsForOriginalRegion:(id)a0;
- (void)addRegionsInContainers:(id)a0;
- (id)_initWithSnapshotter:(id)a0 mapArea:(id)a1 searchArea:(id)a2;
- (id)_debugInfoWithFocusMapSearchInfo:(id)a0;
- (void)addRegions:(id)a0;

@end
