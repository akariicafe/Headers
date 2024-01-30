@class NSObject, NSMutableArray, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject

@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)remoteObjectProxy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)_assertVoidReturnValueInInvocation:(id)a0;
- (id)initWithInterface:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)fulfillWithRemoteObject:(id)a0;
- (void)failWithError:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
