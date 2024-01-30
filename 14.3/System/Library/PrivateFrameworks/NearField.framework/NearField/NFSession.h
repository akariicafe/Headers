@class NSString, NSObject;
@protocol OS_dispatch_queue, NFSessionInterface, NSXPCProxyCreating;

@interface NFSession : NSObject <NFSession> {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionInterface, NSXPCProxyCreating> *_proxy;
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

- (void)endSession;
- (id)proxy;
- (void)setProxy:(id)a0;
- (void)didStartSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)setDidEndCallback:(id /* block */)a0;
- (void)didEndUnexpectedly;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)isFirstInQueue;
- (id)callbackQueue;
- (void)resume;
- (void)setDidStartCallback:(id /* block */)a0;
- (void)setIsFirstInQueue:(BOOL)a0;
- (void)_didStartSession:(id)a0;
- (void)didStartSessionWithoutQueue:(id)a0;
- (void)prioritizeSession;
- (void)_endProxySession;
- (void)_didEndSession;
- (void)endSessionAndStartNextSession:(id)a0 completion:(id /* block */)a1;

@end
