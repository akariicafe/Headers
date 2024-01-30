@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;

- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;
- (id)_defaultDistributionQueue;
- (void)flushMessagesAndNotify:(id /* block */)a0;
- (void)_distributeAsyncDispatchSelector:(SEL)a0 to:(id)a1 distributionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;

@end
