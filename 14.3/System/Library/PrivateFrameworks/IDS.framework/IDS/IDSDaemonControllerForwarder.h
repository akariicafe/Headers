@class NSProtocolChecker, NSObject;
@protocol OS_dispatch_queue;

@interface IDSDaemonControllerForwarder : NSProxy

@property (nonatomic) int priority;
@property (readonly, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSProtocolChecker *protocol;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 ivarQueue:(id)a1 remoteMessageQueue:(id)a2 completion:(id /* block */)a3;
- (id)initWithProtocol:(id)a0 ivarQueue:(id)a1 remoteMessageQueue:(id)a2;

@end
