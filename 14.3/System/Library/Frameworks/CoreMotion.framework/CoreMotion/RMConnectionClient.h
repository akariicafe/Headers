@class NSMutableArray, NSString, RMConnectionEndpoint, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RMConnectionClient : NSObject <RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate>

@property (retain, nonatomic) RMConnectionEndpoint *endpoint;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ streamingDataCallback;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (retain, nonatomic) NSMutableArray *messageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectionTimer;
@property (nonatomic) unsigned long long connectionTimerDelay;
@property (nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)requestStreamingWithMessage:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)stopStreamingInternal;
- (void)stopStreaming;
- (void)replayCache;
- (id)initWithQueue:(id)a0 serviceName:(id)a1 messageHandler:(id /* block */)a2;
- (void)sendCachedMessage:(id)a0 withData:(id)a1;
- (void)handleDaemonStart;
- (void).cxx_destruct;
- (void)invalidate;
- (void)endpoint:(id)a0 didReceiveMessage:(id)a1 withData:(id)a2 replyBlock:(id /* block */)a3;
- (void)endpoint:(id)a0 didReceiveStreamedData:(id)a1;
- (void)endpointWasInvalidated:(id)a0;
- (void)endpointWasInterrupted:(id)a0;
- (void)sendMessage:(id)a0 withData:(id)a1 reply:(id /* block */)a2;

@end
