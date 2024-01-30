@interface DOCItemActionResolver : NSObject {
    id /* block */ _handler;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void)callHandler;

@end
