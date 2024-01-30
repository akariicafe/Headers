@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKRequestDelegate> delegate;

- (void)_start;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)_shutdownRequest;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)cancel;
- (void)_startWithMessage:(id)a0 replyBlock:(id /* block */)a1;

@end
