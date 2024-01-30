@class NSString, HKProxyProvider, NSObject;
@protocol OS_dispatch_queue, HKClinicalSharingSyncObserverDelegate;

@interface HKClinicalSharingSyncObserver : NSObject <HKClinicalSharingSyncObserverClientInterface, _HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKProxyProvider *_proxyProvider;
    BOOL _didSyncStart;
}

@property (weak, nonatomic) id<HKClinicalSharingSyncObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegateQueue:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)invalidate;
- (void)resume;
- (id)exportedInterface;
- (void)resumeWithCompletion:(id /* block */)a0;
- (id)initWithConnection:(id)a0 delegateQueue:(id)a1;
- (void)client_syncDidStartWithInfo:(id)a0;
- (void)client_syncDidFinishWithError:(id)a0;

@end
