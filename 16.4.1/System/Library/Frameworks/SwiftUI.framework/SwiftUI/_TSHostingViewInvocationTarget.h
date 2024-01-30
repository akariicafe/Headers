@interface _TSHostingViewInvocationTarget : NSProxy {
    id /* block */ _handler;
}

- (id)initWithHandler:(id /* block */)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
