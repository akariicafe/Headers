@class NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface DASessionInternal : NSObject {
    BOOL _isCallbackQueueSuspended;
    NSObject<NSXPCProxyCreating> *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property BOOL isFirstInQueue;
@property (retain, setter=setProxy:) id proxy;
@property (readonly, weak) id delegate;

- (id)initWithDelegate:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)dispatchBlockOnCallback:(id /* block */)a0;
- (void)closeProxy;

@end
