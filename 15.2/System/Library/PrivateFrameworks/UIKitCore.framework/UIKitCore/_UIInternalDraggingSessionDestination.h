@class NSProgress, _DUIPotentialDrop, UIWindowScene, _UIApplicationModalProgressController, _UIDataTransferMonitor, _UIDragSetDownAnimation, NSString, _UIInternalDraggingSessionSource, NSPointerArray, NSMutableSet, NSArray, UIDragEvent, PBItemCollection, _UIDropSessionImpl, UIWindow;
@protocol _UIDruidDestinationConnection, _UIDropInteractionOwning;

@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <_UIDataTransferMonitorDelegate, NSProgressReporting, _UIDraggingInfo> {
    unsigned int _touchRoutingPolicyContextID;
    _UIInternalDraggingSessionSource *_sessionSource;
    BOOL _connectedToDruid;
    BOOL _isPolicyDriven;
    BOOL _dragInteractionDidEnd;
    NSMutableSet *_enteredDestinations;
    id<_UIDropInteractionOwning> _dropDestinationOwner;
    UIWindowScene *_dropDestinationWindowScene;
    id /* block */ _dropPerformBlock;
    id /* block */ _dropCompletionBlock;
    id /* block */ _postDropAnimationCompletionBlock;
    _UIDragSetDownAnimation *_setDownAnimation;
    PBItemCollection *_droppedItemCollection;
    _UIDataTransferMonitor *_dataTransferMonitor;
    _UIApplicationModalProgressController *_modalProgressAlertController;
    BOOL _dropWasPerformed;
    _DUIPotentialDrop *_lastPotentialDrop;
    NSPointerArray *_dragEvents;
}

@property (retain, nonatomic) id<_UIDruidDestinationConnection> druidConnection;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSArray *dragEvents;
@property (readonly, nonatomic) unsigned int sessionIdentifier;
@property (readonly, nonatomic) UIDragEvent *activeDragEvent;
@property (readonly, nonatomic) _UIInternalDraggingSessionSource *inAppSessionSource;
@property (readonly, nonatomic) _UIDropSessionImpl *dropSession;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } centroid;
@property (readonly, nonatomic) UIWindow *centroidWindow;
@property (readonly, weak, nonatomic) UIWindow *weakCentroidWindow;
@property (readonly, nonatomic) BOOL shouldDragEventBeSentToGestureRecognizers;
@property (readonly, nonatomic) BOOL didRequestDropToBePerformed;
@property (readonly, nonatomic) NSArray *preDropItemProviders;
@property (readonly, nonatomic) NSArray *dropItemProviders;
@property (readonly, nonatomic) long long sourceDataOwner;
@property (copy, nonatomic) NSArray *internalItems;
@property (readonly, nonatomic) unsigned long long outsideAppSourceOperationMask;
@property (readonly, nonatomic) unsigned long long sourceOperationMask;
@property (readonly, nonatomic) BOOL isAccessibilitySession;
@property (readonly, nonatomic) BOOL drivenByPointer;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long draggingSourceOperationMask;

- (void)connect;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)actualDragOperationForProposedDragOperation:(unsigned long long)a0 destinationDataOwner:(long long)a1 forbidden:(BOOL *)a2;
- (void)requestDropOnOwner:(id)a0 withOperation:(unsigned long long)a1 perform:(id /* block */)a2 completion:(id /* block */)a3;
- (struct CGPoint { double x0; double x1; })draggingLocationInCoordinateSpace:(id)a0;
- (void)requestVisibleItems:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateCentroidFromDragEvent;
- (void)takeVisibleDroppedItems:(id)a0;
- (void)handOffDroppedItems:(id)a0;
- (void)_removeFromDragManager;
- (void)_sessionDidEndNormally:(BOOL)a0;
- (void)setUpDropAnimation:(id)a0 contextID:(unsigned int *)a1 layerRenderID:(unsigned long long *)a2;
- (void)dragInteractionEnding;
- (BOOL)canBeDrivenByDragEvent:(id)a0;
- (void)dataTransferMonitorBeganTransfers:(id)a0;
- (void)dataTransferMonitorFinishedTransfers:(id)a0;
- (id)initWithDragManager:(id)a0 dragEvent:(id)a1;
- (void)addDragEvent:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)takePotentialDrop:(id)a0;
- (void)enteredDestination:(id)a0;
- (void)dragDidExitApp;
- (void)sawDragEndEvent;
- (void)itemsBecameDirty:(id)a0;

@end
