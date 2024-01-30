@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventIDMap;
    NSMutableDictionary *_mutableActivityMap;
    NSMutableDictionary *_mutableEventCallbackMap;
}

@property BOOL invalidated;
@property (readonly) NSXPCConnection *XPCConnection;
@property (readonly) long long serviceType;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) id /* block */ invalidationHandler;

- (void)endAllActivities:(id)a0;
- (BOOL)beginActivity:(id)a0 requestParameters:(id)a1 error:(id *)a2;
- (id /* block */)eventHandlerWithEventID:(id)a0;
- (void)__beginActivity:(id)a0 requestParameters:(id)a1 reply:(id /* block */)a2;
- (void)clearAllEventHandlers;
- (void)endActivity:(id)a0 requestParameters:(id)a1;
- (void).cxx_destruct;
- (void)stopMonitoringAllEvents:(id)a0;
- (id)init;
- (void)__startMonitoringEvent:(id)a0 requestParameters:(id)a1 reply:(id /* block */)a2;
- (BOOL)startMonitoringEvent:(id)a0 requestParameters:(id)a1 error:(id *)a2;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void)stopMonitoringEvent:(id)a0 requestParameters:(id)a1;
- (void)dealloc;
- (void)proxy:(id)a0 receivedEvent:(id)a1;
- (id)initWithServiceType:(long long)a0;
- (void)setEventHandler:(id /* block */)a0 eventID:(id)a1;

@end
