@class NSString, NSMapTable, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface PBFComplicationSnapshotService : NSObject <PBFComplicationSnapshotterObserver, BSInvalidatable, PBFComplicationSnapshotProviding> {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMapTable *_lock_requestToSnapshotReceivedHandlers;
    NSMapTable *_lock_requestToSnapshotErrorHandlers;
    NSMapTable *_lock_requestToResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_lock_preparedComplicationSnapshotForRequest:(id)a0;
- (void)_lock_appendReceivedBlock:(id /* block */)a0 forRequest:(id)a1;
- (void)complicationSnapshotter:(id)a0 didFinishWithSnapshot:(id)a1 error:(id)a2;
- (void)_lock_appendErrorBlock:(id /* block */)a0 forRequest:(id)a1;
- (id)complicationSnapshotForRequest:(id)a0;
- (void)fetchComplicationSnapshotsForRequests:(id)a0 complicationSnapshotReceivedHandler:(id /* block */)a1 errorHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_fireCompletionHandlersForRequest:(id)a0 snapshot:(id)a1 error:(id)a2;
- (void)trimCachedSnapshotsToRequests:(id)a0;
- (id)preparedComplicationSnapshotsForRequests:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
