@class NSString, NSObject;
@protocol OS_dispatch_queue, NFSessionAccessoryInterface, NSXPCProxyCreating;

@interface NFAccessorySession : NSObject <NFAccessorySession> {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionAccessoryInterface, NSXPCProxyCreating> *_proxy;
    id /* block */ _didStartCallback;
    id /* block */ _didEndCallback;
}

@property (readonly) unsigned long long state;
@property (readonly) BOOL didEnd;
@property (readonly) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)callbackQueue;
- (void)setProxy:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (void)setDidEndCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isFirstInQueue;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)init;
- (void)didEndUnexpectedly;
- (void)resume;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)didStartSession:(id)a0;
- (void)didStartSessionWithoutQueue:(id)a0;
- (void)setIsFirstInQueue:(BOOL)a0;
- (void)setDidStartCallback:(id /* block */)a0;
- (void)_didStartSession:(id)a0;
- (void)_endProxySession;
- (void)_didEndSession;

@end
