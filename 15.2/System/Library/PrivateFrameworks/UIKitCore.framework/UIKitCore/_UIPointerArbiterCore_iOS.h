@class _UILumaTrackingBackdropView, UIPointerStyle, NSString, PSPointerPortalSourceCollection, _UIPortalView, PSPointerHoverRegion, NSMutableArray, PSPointerClientController, UIPointerRegion, NSMapTable;

@interface _UIPointerArbiterCore_iOS : NSObject <PSPointerClientControllerDelegate, _UILumaTrackingBackdropViewDelegate, _UIPointerArbitrating>

@property (nonatomic) BOOL hasRunningTransaction;
@property (retain, nonatomic) NSMutableArray *pendingTransactionBlocks;
@property (retain, nonatomic) UIPointerStyle *activePointerStyle;
@property (retain, nonatomic) UIPointerRegion *activePointerRegion;
@property (retain, nonatomic) PSPointerHoverRegion *lastSentHoverRegion;
@property (nonatomic) unsigned long long lastMaterialLuminance;
@property (retain, nonatomic) NSMapTable *pointerRegionToMatchMoveSourceMap;
@property (retain, nonatomic) PSPointerClientController *pointerClientController;
@property (copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (retain, nonatomic) _UIPortalView *pointerPortalView;
@property (retain, nonatomic) _UIPortalView *overlayEffectPortalView;
@property (retain, nonatomic) _UILumaTrackingBackdropView *samplingBackdropView;
@property (nonatomic) unsigned long long transactionRevisionID;
@property (retain, nonatomic) UIPointerRegion *scrollingRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long pointerState;

- (id)_hoverRegionWithStyle:(id)a0 forRegion:(id)a1;
- (void)_setActiveHoverRegion:(id)a0 style:(id)a1 forPointerRegion:(id)a2 transactionID:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)endScrollingWithRegion:(id)a0;
- (id)_pointerShapeForStyle:(id)a0 region:(id)a1;
- (void)_performTransactionUsingBlock:(id /* block */)a0;
- (void)pointerClientControllerWillDecelerate:(id)a0 targetPointerPosition:(inout struct CGPoint { double x0; double x1; } *)a1 velocity:(struct CGPoint { double x0; double x1; })a2 inContextID:(unsigned int)a3 cursorRegionLookupRadius:(double)a4 cursorRegionLookupResolution:(double)a5 lookupConeAngle:(double)a6;
- (void)_prepareContentMatchMoveSourceForPointerRegion:(id)a0 completion:(id /* block */)a1;
- (void)pointerClientControllerDidInvalidateRemoteSources:(id)a0;
- (void)_clearMatchMoveSourceForRegion:(id)a0 immediately:(BOOL)a1;
- (void)_getPointerRegion:(inout id *)a0 andStyle:(inout id *)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 inWindow:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)_performNextTransaction;
- (void)_preparePointerPortalSourceCollectionWithCompletion:(id /* block */)a0;
- (void)beginScrollingWithRegion:(id)a0;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (id)_coordinateSpaceSourceViewForRegion:(id)a0 withStyle:(id)a1;
- (id)_psPointerShapeFromUIPointerShape:(id)a0 atScale:(double)a1;
- (void)exitRegion:(id)a0 removeStyle:(BOOL)a1 completion:(id /* block */)a2;
- (void)applyStyle:(id)a0 forRegion:(id)a1 effectSourceHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)pointerClientControllerClientInteractionStateDidChange:(id)a0;

@end
