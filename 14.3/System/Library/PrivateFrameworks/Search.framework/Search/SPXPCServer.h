@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SPXPCServer : NSObject {
    double _idleTimerInterval;
    BOOL _shutdown;
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned int _qos;
    BOOL hadConnection;
}

@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (copy, nonatomic) id /* block */ defaultMessageHandler;
@property (copy, nonatomic) id /* block */ firstConnectionBlock;

- (BOOL)shutdown;
- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)_handlerForMessageName:(id)a0;
- (id)_highAvailabilityQueue;
- (id)initListenerWithServiceName:(id)a0;
- (void)setHandlerForMessageName:(id)a0 handler:(id /* block */)a1;
- (void)startListening;
- (void)_handleNewConnection:(id)a0 qos:(unsigned int)a1;
- (id)initListenerWithServiceName:(id)a0 onQueue:(id)a1 qos:(unsigned int)a2;

@end
