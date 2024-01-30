@class NSMapTable, NSSet, MPAVRoute, MSVTimer, NSMutableArray, NSMutableSet, NSObject, MPAVRoutingControllerSelection, MPAVRoutingController;
@protocol OS_dispatch_queue;

@interface MPAVRoutingControllerSelectionQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_selectionsEnqueued;
    MPAVRoutingControllerSelection *_selectionInProgress;
    NSMutableSet *_pendingRoutes;
    MSVTimer *_selectionInProgressTimer;
    NSMapTable *_pendingSelectionTimers;
}

@property (readonly, weak, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) BOOL hasPendingPickedRoutes;
@property (readonly, nonatomic) NSSet *pendingPickedRoutes;
@property (readonly, nonatomic) MPAVRoute *pendingPickedRoute;

- (void)_processSelection:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)enqueueSelectionOperation:(long long)a0 forRoutes:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasPendingRoutes;
- (void)cancelInProgressSelectionForRoute:(id)a0;
- (void)_dequeue;
- (void)removePendingRoutes:(id)a0;
- (void)removePendingRoutes:(id)a0 withError:(BOOL)a1;
- (void)removeAllPendingRoutes;
- (void)_dequeueSelectionWhenPossible;
- (void)_enqueue:(id)a0;
- (void)pickedRouteDidChange;
- (void)addPendingRoutes:(id)a0;
- (id)initWithRoutingController:(id)a0;
- (BOOL)routeIsPendingPick:(id)a0;

@end
