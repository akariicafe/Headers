@class NSString, NSMutableDictionary;

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver>

@property (retain, nonatomic) NSMutableDictionary *focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)moveRingToFocusItem:(id)a0;
+ (void)_updateActiveFocusLayers;
+ (void)updateRingForFocusItem:(id)a0 forClient:(id)a1;
+ (BOOL)focusRingAvailable;
+ (Class)shapeLayerClassForItem:(id)a0 client:(id)a1;
+ (id)_currentFocusItemForClient:(id)a0;
+ (void)removeRingFromFocusItem:(id)a0;
+ (void)removeRingFromFocusItem:(id)a0 forClient:(id)a1;
+ (void)moveRingToFocusItem:(id)a0 forClient:(id)a1;
+ (id)manager;
+ (void)updateRingForFocusItem:(id)a0;
+ (void)_removeActiveFocusLayers;

- (void)addSelectedFocusRingForItem:(id)a0 forClient:(id)a1;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; id x4; id x5; id x6; id x7; } *)a0 forAncestor:(id)a1;
- (id)activeFocusLayersForClient:(id)a0;
- (long long)_insertionIndexOfFocusLayerForFocusItem:(id)a0;
- (id)_viewToAddFocusLayerForItem:(id)a0;
- (void)addSelectedParentFocusRingForItem:(id)a0 forClient:(id)a1;
- (void)_removeActiveFocusLayersForClient:(id)a0;
- (id)activeFocusLayersToItemsForClient:(id)a0;
- (void)addFocusRingForItem:(id)a0 forClient:(id)a1;
- (void)_addFocusLayer:(id)a0 toView:(id)a1 forItem:(id)a2;
- (void)_updateFocusLayerFrames;
- (void)addParentFocusRingForItem:(id)a0 forClient:(id)a1;

@end
