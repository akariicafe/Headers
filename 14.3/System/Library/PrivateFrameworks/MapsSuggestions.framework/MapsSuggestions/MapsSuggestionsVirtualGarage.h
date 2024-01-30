@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsVirtualGarageConnector;

@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate> {
    id<MapsSuggestionsVirtualGarageConnector> _connector;
    MapsSuggestionsObservers *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnectedToVG;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeConnection;
- (void)openConnection;
- (void)virtualGarageDidUpdateUnpairedVehicles:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithConnector:(id)a0;
- (BOOL)entriesForUnpairedVehiclesWithHandler:(id /* block */)a0;
- (void)stateOfChargeForVehicleWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (id)initFromResourceDepot:(id)a0;

@end
