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

- (void)removeAllPendingRoutes;
- (id)initWithRoutingController:(id)a0;
- (void)removePendingRoutes:(id)a0;
- (void)addPendingRoutes:(id)a0;
- (BOOL)hasPendingRoutes;
- (void)removePendingRoutes:(id)a0 withError:(BOOL)a1;
- (void)_dequeueSelectionWhenPossible;
- (void)pickedRouteDidChange;
- (void)_enqueue:(id)a0;
- (void)enqueueSelectionOperation:(long long)a0 forRoutes:(id)a1 completion:(id /* block */)a2;
- (void)_processSelection:(id)a0 completion:(id /* block */)a1;
- (void)_dequeue;
- (BOOL)routeIsPendingPick:(id)a0;
- (void)cancelInProgressSelectionForRoute:(id)a0;
- (void).cxx_destruct;

@end
