@class NSObject, NSMutableArray, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject

@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)remoteObjectProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithInterface:(id)a0 queue:(id)a1;
- (void)fulfillWithRemoteObject:(id)a0;
- (void)_assertVoidReturnValueInInvocation:(id)a0;
- (void)failWithError:(id)a0;

@end
