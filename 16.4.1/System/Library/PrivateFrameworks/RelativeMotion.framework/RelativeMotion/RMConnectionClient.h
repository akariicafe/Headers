@class NSMutableArray, NSString, RMConnectionEndpoint, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RMConnectionClient : NSObject <RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate> {
    BOOL _valid;
    RMConnectionEndpoint *_endpoint;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _streamingDataCallback;
    id /* block */ _messageHandler;
    NSMutableArray *_messageCache;
    NSObject<OS_dispatch_source> *_connectionTimer;
    unsigned long long _connectionTimerDelay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endpoint:(id)a0 didReceiveMessage:(id)a1 withData:(id)a2 replyBlock:(id /* block */)a3;
- (void)endpoint:(id)a0 didReceiveStreamedData:(id)a1;
- (void)endpointWasInterrupted:(id)a0;
- (void)endpointWasInvalidated:(id)a0;

@end
