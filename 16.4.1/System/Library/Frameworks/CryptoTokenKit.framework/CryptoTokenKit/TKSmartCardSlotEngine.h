@class NSXPCConnection, NSString, NSXPCListenerEndpoint, TKSmartCardATR, TKSmartCardSessionEngine, NSHashTable, TKPowerMonitor, NSObject, NSMutableArray, NSXPCListener, NSMapTable;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, TKSmartCardSlotEngineDelegate;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate> {
    unsigned long long _lastId;
    long long _state;
    long long _powerState;
    long long _previousState;
    TKSmartCardATR *_atr;
    unsigned long long _protocol;
    NSObject<OS_dispatch_source> *_idlePowerDownSource;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMapTable *_stateRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    NSObject<OS_os_log> *_log;
}

@property (weak) id<TKSmartCardSlotEngineDelegate> delegate;
@property (readonly) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *powerRequestsQueue;
@property BOOL apduSentSinceLastReset;
@property (weak) TKSmartCardSessionEngine *session;
@property long long maxInputLength;
@property long long maxOutputLength;
@property BOOL securePINVerificationSupported;
@property BOOL securePINChangeSupported;
@property (retain) NSXPCListenerEndpoint *serverEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (BOOL)setProtocol:(unsigned long long)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (BOOL)reset;
- (id)_findReservation:(id)a0 connection:(id)a1;
- (id)_getReservationId;
- (BOOL)_setupWithName:(id)a0 delegate:(id)a1;
- (void)cardPresent:(BOOL)a0;
- (void)changeStateTo:(long long)a0 powerState:(long long)a1;
- (BOOL)connectCardSessionWithParameters:(id)a0;
- (id)dictionaryForState:(long long)a0;
- (void)getAttrib:(unsigned int)a0 reply:(id /* block */)a1;
- (void)leaveSession:(id)a0;
- (void)logWithBytes:(id)a0 handler:(id /* block */)a1;
- (void)powerDownWithEject:(BOOL)a0;
- (void)reserveProtocols:(id)a0 reservationId:(id)a1 exclusive:(BOOL)a2 reply:(id /* block */)a3;
- (void)runUserInteraction:(id)a0 reply:(id /* block */)a1;
- (void)scheduleIdlePowerDown;
- (void)sendControl:(id)a0 data:(id)a1 expectedLength:(unsigned int)a2 reply:(id /* block */)a3;
- (void)sessionWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)setAttrib:(unsigned int)a0 data:(id)a1 reply:(id /* block */)a2;
- (void)setupSlotWithReply:(id /* block */)a0;
- (BOOL)setupWithName:(id)a0 delegate:(id)a1;
- (id)slotRegistryWithErrorHandler:(id /* block */)a0;
- (void)waitForNextState:(long long)a0 reply:(id /* block */)a1;

@end
