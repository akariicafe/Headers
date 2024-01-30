@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKRequestDelegate> delegate;

- (void)_start;
- (void)cancel;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_shutdownRequest;
- (void)_startWithMessage:(id)a0 replyBlock:(id /* block */)a1;
- (id)errorFromCFObject:(id)a0;

@end
