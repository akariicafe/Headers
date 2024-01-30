@class TRNearbyDevice, NSMutableDictionary, TRConnection, TRAnisetteDataHandler, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TRSession : NSObject {
    TRConnection *_connection;
}

@property (retain, nonatomic) TRNearbyDevice *nearbyDevice;
@property (retain, nonatomic) NSMutableDictionary *messageHandlerMap;
@property (retain, nonatomic) TRAnisetteDataHandler *anisetteDataHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageHandlerMapQ;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQ;
@property (retain) NSObject<OS_dispatch_source> *heartbeatRequestTimer;
@property (retain) TRConnection *connection;
@property (readonly, getter=isConnected) BOOL connected;
@property (copy, nonatomic) id /* block */ disconnectHandler;

- (void)sendEvent:(id)a0;
- (void)disconnect;
- (void)setEventHandler:(id /* block */)a0 forEventClass:(Class)a1;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNearbyDevice:(id)a0;
- (void)setRequestHandler:(id /* block */)a0 forRequestClass:(Class)a1;
- (void)_handleRequest:(id)a0;
- (void)startHeartbeat;
- (void)_respondToRequest:(id)a0 withError:(id)a1;
- (void)sendHeartbeatWithResponseHandler:(id /* block */)a0;
- (void)_sendResponse:(id)a0 forRequest:(id)a1;
- (id /* block */)_handlerForEventClass:(Class)a0;
- (void)_handleHeartbeatWithResponseHandler:(id /* block */)a0;
- (id /* block */)_handlerForRequestClass:(Class)a0;
- (void)_setMessageHandler:(id)a0 forMessageClass:(Class)a1;
- (id)_messageHandlerForMessageClass:(Class)a0;
- (void)_sendHeartbeats;

@end
