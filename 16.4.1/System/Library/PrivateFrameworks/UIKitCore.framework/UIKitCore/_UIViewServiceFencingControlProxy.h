@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy

+ (id)proxyWithTarget:(id)a0 exportedProtocol:(id)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)__finishParticipatingInSystemAnimationFence:(id)a0;
- (void)__participateInSystemAnimationFence:(id)a0;
- (void)__participateInSystemAnimationFence:(id)a0 timing:(struct _UIUpdateTiming { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;

@end
