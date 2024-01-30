@class NSString, MapsSuggestionsDarwinNotificationTrigger;

@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver> {
    BOOL _onExit;
    BOOL _onConnect;
    BOOL _onDisconnect;
    MapsSuggestionsDarwinNotificationTrigger *_btDisconnectTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_btExitTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_btConnectTrigger;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerFired:(id)a0;
- (void)didAddFirstObserver;
- (void)dealloc;
- (id)initFireOnConnect:(BOOL)a0 disconnect:(BOOL)a1 exit:(BOOL)a2;
- (void)didRemoveLastObserver;
- (void).cxx_destruct;

@end
