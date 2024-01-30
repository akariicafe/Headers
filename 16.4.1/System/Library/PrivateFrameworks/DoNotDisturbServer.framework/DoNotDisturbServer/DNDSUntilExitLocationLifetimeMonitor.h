@class NSArray, NSString, CLRegion, DNDSUntilExitRegionStore;
@protocol DNDSBackingStore, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSAggregateLocationLifetimeMonitor;

@interface DNDSUntilExitLocationLifetimeMonitor : NSObject <DNDSLifetimeMonitor, CLLocationManagerDelegate> {
    CLRegion *_currentRegion;
    BOOL _regionEntered;
    BOOL _hasActiveLifetimes;
    DNDSUntilExitRegionStore *_store;
    id<DNDSBackingStore> _backingStore;
}

@property (weak, nonatomic) id<DNDSAggregateLocationLifetimeMonitor> aggregateMonitor;
@property (readonly, nonatomic) BOOL hasCurrentRegion;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_stopMonitoringCurrentLocation;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)_queue_refreshMonitor;
- (void)refreshMonitorForDate:(id)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)_queue_sendExpiryEventForAllLocationAssertions;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_queue_beginMonitoringCurrentLocation;
- (void)_loadDataFromBackingStore;
- (void)_queue_geofenceRegion:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_queue_geofenceLocation:(id)a0;
- (id)initWithAggregateMonitor:(id)a0;
- (void).cxx_destruct;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;

@end
