@class NSString, NSHashTable, NSXPCConnection;

@interface DNDRemoteServiceConnection : NSObject <DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol> {
    NSXPCConnection *_connection;
    NSHashTable *_eventListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)deliverActiveModeAssertionUpdate:(id)a0 invalidation:(id)a1 clientIdentifiers:(id)a2;
- (void)deliverUpdatedScheduleSettings:(id)a0;
- (void)setPhoneCallBypassSettings:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)getBehaviorSettingsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)getScheduleSettingsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)deliverUpdatedPhoneCallBypassSettings:(id)a0;
- (void)resolveBehaviorForEventDetails:(id)a0 requestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeEventListener:(id)a0;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)setScheduleSettings:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)addEventListener:(id)a0;
- (void)_handleRemoteConnectionInvalidated;
- (void)queryStateWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleRemoteConnectionInterrupted;
- (void)invalidateActiveModeAssertionWithDetails:(id)a0 reasonOverride:(unsigned long long)a1 requestDetails:(id)a2 completionHandler:(id /* block */)a3;
- (void)deliverStateUpdate:(id)a0;
- (void)registerForStateUpdatesWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)deliverUpdatedBehaviorSettings:(id)a0;
- (void)takeModeAssertionWithDetails:(id)a0 requestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)getActiveModeAssertionWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)setBehaviorSettings:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;

@end
