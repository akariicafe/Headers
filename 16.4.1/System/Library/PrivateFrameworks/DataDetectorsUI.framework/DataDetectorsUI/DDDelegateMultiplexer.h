@protocol NSObject;

@interface DDDelegateMultiplexer : NSProxy {
    id<NSObject> _delegateA;
    id<NSObject> _delegateB;
}

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithDelegate:(id)a0 andDelegate:(id)a1;

@end
