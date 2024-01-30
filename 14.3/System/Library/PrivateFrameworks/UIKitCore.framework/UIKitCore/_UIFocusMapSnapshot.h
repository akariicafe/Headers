@class NSHashTable, NSString, NSArray, UIFocusSystem, _UIFocusSearchInfo, _UIFocusMapSnapshotDebugInfo, NSMutableArray, UIScreen, _UIFocusRegion;
@protocol UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    BOOL _didCaptureSnapshot;
    NSMutableArray *_containersBeingAdded;
    NSMutableArray *_containersBeingAddedFocusSystems;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    BOOL _isSearchingRegionsOfInterestContainer;
    BOOL _clipToSnapshotRect;
    NSArray *_regions;
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
- (id)init;
- (void).cxx_destruct;
- (void)_capture;
- (void)addRegions:(id)a0;
- (id)searchArea;
- (void)addRegion:(id)a0;
- (id)regionsForOriginalRegion:(id)a0;
- (void)addRegionsInContainer:(id)a0;
- (void)addRegionsInContainers:(id)a0;
- (id)_initWithSnapshotter:(id)a0 mapArea:(id)a1 searchArea:(id)a2;
- (id)_initWithSnapshotter:(id)a0 mapArea:(id)a1;
- (id)_debugInfoWithFocusMapSearchInfo:(id)a0;

@end
