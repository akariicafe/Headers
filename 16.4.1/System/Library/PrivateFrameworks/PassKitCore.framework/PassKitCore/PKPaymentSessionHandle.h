@class PKTransactionSessionWrapper, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    PKTransactionSessionWrapper *_sessionHandle;
}

- (void)invalidateSession;
- (void).cxx_destruct;
- (id)initWithInternalSessionHandle:(id)a0 targetQueue:(id)a1;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;

@end
