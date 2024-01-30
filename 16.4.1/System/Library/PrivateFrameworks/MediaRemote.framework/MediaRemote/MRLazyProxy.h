@class Protocol;

@interface MRLazyProxy : NSProxy

@property (readonly, nonatomic) id /* block */ objectCallback;
@property (readonly, nonatomic) Protocol *protocol;

+ (id)proxyWithProtocol:(id)a0 objectCallback:(id /* block */)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
