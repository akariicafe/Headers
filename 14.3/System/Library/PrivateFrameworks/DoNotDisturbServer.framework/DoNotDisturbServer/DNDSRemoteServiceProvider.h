@class NSXPCListener, NSString, NSMapTable, DNDSClientDetailsProvider;
@protocol DNDSRemoteServiceProviderDelegate;

@interface DNDSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, DNDRemoteServiceServerProtocol> {
    NSXPCListener *_listener;
    NSMapTable *_clientConnectionDetailsByConnection;
    DNDSClientDetailsProvider *_clientDetailsProvider;
}

@property (weak, nonatomic) id<DNDSRemoteServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleClientConnectionInvalidated:(id)a0;
- (void).cxx_destruct;
- (void)handleUpdatedPhoneCallBypassSettings:(id)a0;
- (void)_handleClientConnectionInterrupted:(id)a0;
- (void)dealloc;
- (void)setPhoneCallBypassSettings:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)_unregisterConnectionDetailsForClientConnection:(id)a0;
- (void)getBehaviorSettingsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleUpdatedBehaviorSettings:(id)a0;
- (void)getScheduleSettingsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveBehaviorForEventDetails:(id)a0 requestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleUpdatedScheduleSettings:(id)a0;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)setScheduleSettings:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)queryStateWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerOrMutateConnectionDetailsForClientConnection:(id)a0 handler:(id /* block */)a1;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateActiveModeAssertionWithDetails:(id)a0 reasonOverride:(unsigned long long)a1 requestDetails:(id)a2 completionHandler:(id /* block */)a3;
- (void)resume;
- (void)registerForStateUpdatesWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (id)_clientDetailsForClientIdentifier:(id)a0 clientConnection:(id)a1;
- (void)takeModeAssertionWithDetails:(id)a0 requestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithClientDetailsProvider:(id)a0;
- (void)getActiveModeAssertionWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleStateUpdate:(id)a0;
- (void)invalidate;
- (void)setBehaviorSettings:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)_iterateClientConnectionsToSendWithHandler:(id /* block */)a0;
- (void)handleModeAssertionUpdateResult:(id)a0;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;

@end
