@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKRequestDelegate> delegate;

- (void)cancel;
- (void)_start;
- (void)_endBackgroundTask;
- (id)init;
- (void).cxx_destruct;
- (void)_beginBackgroundTask;
- (void)start;
- (void)_shutdownRequest;
- (void)_startWithMessage:(id)a0 replyBlock:(id /* block */)a1;

@end
