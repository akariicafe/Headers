@class NSString;
@protocol MapsSuggestionsVirtualGarageConnectorDelegate;

@interface MapsSuggestionsRealVirtualGarageConnector : NSObject <VGVirtualGarageObserver, MapsSuggestionsVirtualGarageConnector>

@property (weak, nonatomic) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openVGConnection;
- (void)closeVGConnection;
- (void)startObservingVG;
- (void)stopObservingVG;
- (void)fetchUnpairedVehiclesWithHandler:(id /* block */)a0;
- (void)fetchStateOfChargeForVehicleWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)virtualGarage:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (void)virtualGarageDidUpdate:(id)a0;

@end
