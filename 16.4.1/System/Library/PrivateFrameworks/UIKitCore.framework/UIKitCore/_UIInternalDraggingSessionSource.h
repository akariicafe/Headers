@class UIView, NSString, NSArray, PBItemCollection, NSTimer, UIWindow, UIDragEvent, _UIDruidSourceConnection, UIDraggingBeginningSessionConfiguration, UIDraggingSystemTouchRoutingPolicy, _UIDragSetDownAnimation;
@protocol _UIDraggingSessionDelegate;

@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner <_UIDraggingInfo> {
    struct CAPoint3D { double x; double y; double z; } _lastNotifiedCentroid;
    BOOL _didHandOffDragImage;
    PBItemCollection *_pbItemCollection;
    UIDraggingSystemTouchRoutingPolicy *_touchRoutingPolicy;
    _UIDragSetDownAnimation *_setDownAnimation;
    long long _stateAfterSetDown;
    BOOL _sentWillEnd;
    BOOL _hostIsActive;
    BOOL _originatedInHostedWindow;
    NSTimer *_waitingToSendDidExitAppTimer;
    UIDraggingBeginningSessionConfiguration *_configuration;
}

@property (retain, nonatomic) _UIDruidSourceConnection *druidConnection;
@property (weak, nonatomic) id<_UIDraggingSessionDelegate> delegate;
@property (weak, nonatomic) UIDragEvent *dragEvent;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long resultOperation;
@property (copy, nonatomic) NSArray *internalItems;
@property (nonatomic) long long dataOwner;
@property (readonly, nonatomic) struct CAPoint3D { double x; double y; double z; } centroid;
@property (readonly, nonatomic) UIWindow *centroidWindow;
@property (readonly, weak, nonatomic) UIWindow *weakCentroidWindow;
@property (readonly, nonatomic) unsigned int sessionIdentifier;
@property (readonly, nonatomic) unsigned long long withinAppSourceOperationMask;
@property (readonly, nonatomic) unsigned long long outsideAppSourceOperationMask;
@property (readonly, nonatomic) BOOL prefersFullSizePreview;
@property (readonly, nonatomic) BOOL shouldCancelOnAppDeactivation;
@property (readonly, nonatomic) BOOL canAddItems;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL didHandOffDragImage;
@property (readonly, nonatomic) unsigned long long draggingSourceOperationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void)cancelDrag;
- (void).cxx_destruct;
- (void)_sendHandedOffDragImageForItem:(id)a0;
- (void)addPublicItems:(id)a0;
- (void)dragIsInsideApp;
- (BOOL)_canHandOffCancelledItems:(id)a0;
- (void)_didBeginDrag;
- (void)_endWithOperation:(unsigned long long)a0;
- (void)_getOperationMaskFromDelegate;
- (void)_handOffCancelledItems:(id)a0;
- (void)_hostDidDeactivate;
- (void)_hostWillBecomeActive;
- (BOOL)_routingPolicyHasSpecificTouchContextIDs;
- (void)_sendDataTransferFinished;
- (void)_sendDidEndWithOperation:(unsigned long long)a0;
- (void)_sendDidMove;
- (void)_sendDragPreviewReplyWithIndexSet:(id)a0 dragPreviews:(id)a1 completion:(id /* block */)a2;
- (void)_sendHandedOffDragImage;
- (void)_sendWillAddItems:(id)a0;
- (void)_sendWillBegin;
- (void)_sendWillEndWithOperation:(unsigned long long)a0;
- (void)_setupAnimationForCancelledItems:(id)a0 returningContextID:(unsigned int *)a1 layerRenderID:(unsigned long long *)a2;
- (void)beginDrag:(id /* block */)a0;
- (void)dragDidExitApp;
- (struct CGPoint { double x0; double x1; })draggingLocationInCoordinateSpace:(id)a0;
- (BOOL)dynamicallyUpdatesPrefersFullSizePreviews;
- (id)initWithDragManager:(id)a0 configuration:(id)a1;
- (void)itemsBecameDirty:(id)a0;
- (BOOL)preventsSimultaneousDragFromView:(id)a0;
- (id)touchRoutingPolicy;
- (BOOL)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)a0;
- (void)updateCentroidFromDragEvent;

@end
