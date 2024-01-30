@class NSObject, AEXPCProxy, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling> {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)proxyWithEndpoint:(id)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)handleEventDidBeginWithCompletion:(id /* block */)a0;
- (void)handleEventDidInvalidateWithError:(id)a0 completion:(id /* block */)a1;

@end
