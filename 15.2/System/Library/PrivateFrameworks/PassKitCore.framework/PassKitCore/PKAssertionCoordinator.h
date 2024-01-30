@class NSString, NSHashTable, NSObject, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)isAssertionValid:(id)a0 completion:(id /* block */)a1;
- (void)remoteServiceDidSuspend:(id)a0;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)acquireAssertionOfType:(unsigned long long)a0 withReason:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (id)initSharedInstance;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)dealloc;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (id)_remoteObjectProxy;
- (void)_removeAssertionWithIdentifier:(id)a0;
- (void)invalidateAssertion:(id)a0 completion:(id /* block */)a1;
- (void)assertion:(id)a0 shouldInvalidateWhenBackgrounded:(BOOL)a1;

@end
