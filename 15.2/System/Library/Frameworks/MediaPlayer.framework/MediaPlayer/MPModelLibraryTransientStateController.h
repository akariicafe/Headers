@class NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPModelLibraryTransientStateController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_registeredTransientState;
}

+ (id)sharedDeviceLibraryController;

- (void)performDeleteEntityChangeRequest:(id)a0 withRelatedModelObjects:(id)a1 completion:(id /* block */)a2;
- (long long)transientAddStateForModelObject:(id)a0;
- (void)performLibraryImportChangeRequest:(id)a0 withRelatedModelObjects:(id)a1 completion:(id /* block */)a2;
- (void)performKeepLocalChangeRequest:(id)a0 withRelatedModelObjects:(id)a1 completion:(id /* block */)a2;
- (void)performDeleteEntityChangeRequest:(id)a0 withRelatedModelObjects:(id)a1;
- (void)performKeepLocalChangeRequest:(id)a0 withRelatedModelObjects:(id)a1;
- (void).cxx_destruct;
- (void)unregisterTransientState:(id)a0;
- (id)init;
- (void)performLibraryImportChangeRequest:(id)a0 withRelatedModelObjects:(id)a1;
- (long long)transientKeepLocalStateForModelObject:(id)a0;
- (id)registerTransientKeepLocalState:(long long)a0 forModelObjects:(id)a1 relatedModelObjects:(id)a2;
- (void)addOperation:(id)a0;
- (id)registerTransientAddState:(long long)a0 forModelObjects:(id)a1 relatedModelObjects:(id)a2;

@end
