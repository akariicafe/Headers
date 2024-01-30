@class NSXPCInterface;
@protocol NSXPCProxyCreating;

@interface AMSDaemonConnectionErrorForwardingProxy : NSProxy

@property (readonly, nonatomic) NSXPCInterface *interface;
@property (readonly, nonatomic) id<NSXPCProxyCreating> proxy;
@property (readonly, nonatomic) BOOL isSync;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)_blockToInvokeWithErrorForwardingForInvocation:(id)a0 errorArgumentIndex:(unsigned long long *)a1;
- (id)initWithProxy:(id)a0 fromInterface:(id)a1;
- (id)initWithProxy:(id)a0 fromInterface:(id)a1 isSync:(BOOL)a2;

@end
