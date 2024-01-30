@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy

+ (id)proxyWithTarget:(id)a0 exportedProtocol:(id)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)__flushCATransationIfNeededForFence:(id)a0 hostPresentationTime:(unsigned long long)a1;
- (void)__participateInSystemAnimationFence:(id)a0;

@end
