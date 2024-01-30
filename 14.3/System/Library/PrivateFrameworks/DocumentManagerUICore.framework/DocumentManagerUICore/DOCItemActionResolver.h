@interface DOCItemActionResolver : NSObject {
    id /* block */ _handler;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)callHandler;

@end
