@interface PFMainThreadDirectMessagingMulticaster : PFDirectMessagingMulticaster

- (void)distributeSelector:(SEL)a0 distributionBlock:(id /* block */)a1;

@end
