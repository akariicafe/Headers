@class NSXPCListener, RadioAvailabilityController, NSString, NSMutableSet, RadioRecentStationsController, NSObject;
@protocol OS_dispatch_queue;

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_connections;
    BOOL _hasRefreshedStations;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) RadioAvailabilityController *availabilityController;
@property (readonly, nonatomic) RadioRecentStationsController *recentStationsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)a0;
- (void)_addConnection:(id)a0;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_removeConnection:(id)a0;
- (void)_handleRecentStationsControllerDidChange;
- (void)start;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)_playActivityReportingControllerDidFlushEventsNotification:(id)a0;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id /* block */)a0;

@end
