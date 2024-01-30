@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate>

@property (class, readonly) MLMediaLibraryResourcesServiceServer *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore;
@property (retain, nonatomic) NSXPCListener *xpcServiceListener;
@property (retain, nonatomic) NSMutableSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeObserver:(id)a0;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void).cxx_destruct;
- (void)_addObserver:(id)a0;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)libraryContainerPathWithCompletion:(id /* block */)a0;
- (id)initWithAccountChangeObserver:(id)a0;
- (void)_blockExecutionForOnGoingAccountChangeIfNeeded;
- (void)_unblockExecutionForFutureAccountChange;

@end
