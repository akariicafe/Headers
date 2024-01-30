@class NSString, MapsSuggestionsDarwinNotificationTrigger;

@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsCompositeTriggeringToggle <MapsSuggestionsTriggerObserver> {
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

@end
