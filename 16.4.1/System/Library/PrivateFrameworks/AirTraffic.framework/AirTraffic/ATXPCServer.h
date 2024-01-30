@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface ATXPCServer : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    BOOL _timerHasFiredSinceLastMessage;
}

@property (copy, nonatomic) id /* block */ lockdownHandler;
@property (copy, nonatomic) id /* block */ defaultMessageHandler;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSMutableSet *connections;

- (void)_handleNewConnection:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_connections;
- (BOOL)_doingWork;
- (id /* block */)_handlerForMessageName:(id)a0;
- (id)_highAvailabilityQueue;
- (void)_rescheduleIdleTimerSourceWithInterval:(double)a0;
- (void)_resetMessageFlag;
- (void)_runShutdownHandler;
- (id)initListenerWithServiceName:(id)a0;
- (void)setHandlerForMessageName:(id)a0 handler:(id /* block */)a1;
- (void)setIdleTimerInterval:(double)a0;

@end
