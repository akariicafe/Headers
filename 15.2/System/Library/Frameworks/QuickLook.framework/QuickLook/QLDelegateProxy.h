@interface QLDelegateProxy : NSProxy

@property (weak) id firstDelegate;
@property (weak) id secondDelegate;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
