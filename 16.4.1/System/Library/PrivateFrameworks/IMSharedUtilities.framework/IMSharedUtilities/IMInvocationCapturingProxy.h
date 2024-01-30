@class Protocol;

@interface IMInvocationCapturingProxy : NSProxy

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) id /* block */ forwardingHandler;

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithProtocol:(id)a0 forwardingHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
