@class NSString, NSMutableDictionary;

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver>

@property (retain, nonatomic) NSMutableDictionary *focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)focusRingAvailable;
+ (void)moveRingToFocusItem:(id)a0;
+ (void)moveRingToFocusItem:(id)a0 forClient:(id)a1;
+ (Class)shapeLayerClassForItem:(id)a0 client:(id)a1;
+ (void)_updateActiveFocusLayers;
+ (void)removeRingFromFocusItem:(id)a0;
+ (void)updateRingForFocusItem:(id)a0;
+ (id)manager;
+ (void)updateRingForFocusItem:(id)a0 forClient:(id)a1;
+ (void)_removeActiveFocusLayers;
+ (id)_currentFocusItemForClient:(id)a0;
+ (void)removeRingFromFocusItem:(id)a0 forClient:(id)a1;

- (void)_addFocusLayer:(id)a0 toView:(id)a1 forItem:(id)a2;
- (void)_updateFocusLayerFrames;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;
- (void)addFocusRingForItem:(id)a0 forClient:(id)a1;
- (long long)_insertionIndexOfFocusLayerForFocusItem:(id)a0;
- (void)addSelectedParentFocusRingForItem:(id)a0 forClient:(id)a1;
- (BOOL)_focusItemWantsFocusRing:(id)a0 forClient:(id)a1;
- (id)_viewToAddFocusLayerForItem:(id)a0 forClient:(id)a1;
- (void)addParentFocusRingForItem:(id)a0 forClient:(id)a1;
- (id)_focusRingPathForItem:(id)a0 inView:(id)a1;
- (void)addSelectedFocusRingForItem:(id)a0 forClient:(id)a1;
- (id)activeFocusLayersToItemsForClient:(id)a0;
- (id)activeFocusLayersForClient:(id)a0;
- (void).cxx_destruct;
- (void)_removeActiveFocusLayersForClient:(id)a0;

@end
