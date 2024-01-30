@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;
- (id)_defaultDistributionQueue;
- (void)flushMessagesAndNotify:(id /* block */)a0;
- (void)_distributeAsyncDispatchSelector:(SEL)a0 to:(id)a1 distributionBlock:(id /* block */)a2;
- (void)resume;
- (void)suspend;

@end
