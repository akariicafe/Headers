@interface PFDirectMessagingMulticaster : PFMulticaster

- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;

@end
