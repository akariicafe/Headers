@interface WebMainThreadInvoker : NSProxy {
    id target;
    id exception;
}

- (id)initWithTarget:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)handleException:(id)a0;

@end
