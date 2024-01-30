@class NFSession, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    NFSession *_internalSession;
}

@property (readonly, nonatomic) unsigned long long lifecycleState;

+ (id)startInAppSessionWithCompletion:(id /* block */)a0;
+ (id)startInAppSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startReaderSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startApplePayTrustSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)a0;
+ (id)startReaderSessionWithCompletion:(id /* block */)a0;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)a0;
+ (id)startApplePayTrustSessionWithCompletion:(id /* block */)a0;

- (void)invalidateSession;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;
- (void)performBlockSyncOnInternalSession:(id /* block */)a0;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (void)performBlockAsyncOnInternalSession:(id /* block */)a0;

@end
