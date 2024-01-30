@interface NSAutoContentAccessingProxy : NSProxy {
    id _target;
}

+ (id)proxyWithTarget:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;

@end
