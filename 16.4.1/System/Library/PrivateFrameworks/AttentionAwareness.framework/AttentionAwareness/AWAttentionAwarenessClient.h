@class AWAttentionAwarenessConfiguration, AWAttentionEvent, NSString, NSObject, AWClientPollWaiter;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface AWAttentionAwarenessClient : NSObject <AWServiceObserver, AWFrameworkClient> {
    NSObject<OS_dispatch_queue> *_queue;
    AWClientPollWaiter *_pollWaiter;
    id<NSXPCProxyCreating> _remoteClientProxy;
    unsigned long long _suspensionCount;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_clientNotifQueue;
    id /* block */ _clientNotifBlock;
    NSObject<OS_dispatch_queue> *_clientEventQueue;
    id /* block */ _clientEventBlock;
    NSObject<OS_dispatch_queue> *_clientStreamingQueue;
    id /* block */ _clientStreamingBlock;
    AWAttentionAwarenessConfiguration *_configuration;
    BOOL _unitTestMode;
    int _clientIndex;
    BOOL _lastAttentionState;
}

@property (copy, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, retain, nonatomic) AWAttentionEvent *lastEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)connect:(BOOL)a0;
- (BOOL)setConfiguration:(id)a0 shouldReset:(BOOL)a1 error:(id *)a2;
- (BOOL)invalidateWithError:(id *)a0;
- (BOOL)cancelFaceDetectStreamWithError:(id *)a0;
- (void)notifyPollEventType:(unsigned long long)a0 event:(id)a1;
- (void)notifyEvent:(id)a0;
- (BOOL)pollForAttentionWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2 error:(id *)a3;
- (BOOL)resumeWithError:(id *)a0;
- (BOOL)_invokeRequiringClient:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)pollForAttentionWithTimeout:(double)a0 event:(id *)a1 error:(id *)a2;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (BOOL)resetAttentionLostTimeoutWithError:(id *)a0;
- (BOOL)cancelPollForAttentionWithError:(id *)a0;
- (id)unitTestSampler;
- (BOOL)invokeRequiringClient:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)serviceInterrupted;
- (void)notify:(unsigned long long)a0;
- (void)setNotificationHandlerWithQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)invalidateRemoteClientWithError:(id *)a0;
- (BOOL)suspendWithError:(id *)a0;
- (id)init;
- (void)setEventStreamerWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyStreamingEvent:(id)a0;
- (void)setUnitTestMode:(BOOL)a0;
- (void)setEventHandlerWithQueue:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)startStream;

@end
