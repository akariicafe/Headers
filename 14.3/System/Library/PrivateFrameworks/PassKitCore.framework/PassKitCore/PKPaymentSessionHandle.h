@class NSObject;
@protocol OS_dispatch_queue, NFSession;

@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    id<NFSession> _sessionHandle;
}

- (void)invalidateSession;
- (void).cxx_destruct;
- (BOOL)isFirstInQueue;
- (id)initWithInternalSessionHandle:(id)a0 targetQueue:(id)a1;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;

@end
