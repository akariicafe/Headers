@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue, IXAppInstallObserverDelegate;

@interface IXAppInstallObserver : NSObject <NSXPCListenerDelegate, IXAppInstallObserverProtocol>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, weak, nonatomic) id<IXAppInstallObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_oncePerBootUniqueIdentifierForServiceName:(id)a0;
- (oneway void)_client_coordinatorWithSeed:(id)a0 configuredPromiseDidBeginFulfillment:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_internalInit;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(id)a0;
- (void)dealloc;
- (oneway void)_client_coordinatorWithSeed:(id)a0 didCancelWithReason:(id)a1 client:(unsigned long long)a2;
- (id)initTransientForClients:(id)a0 delegate:(id)a1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)a0;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(id)a0;
- (id)initWithMachServiceName:(id)a0 forClients:(id)a1 delegate:(id)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)a0;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)a0;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(id)a0;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)a0;

@end
