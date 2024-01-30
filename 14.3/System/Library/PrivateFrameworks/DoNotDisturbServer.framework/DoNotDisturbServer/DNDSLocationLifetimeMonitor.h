@class NSString, NSArray, CLLocationManager, CLRegion, NSObject;
@protocol DNDSLifetimeMonitorDataSource, OS_dispatch_queue, DNDSLifetimeMonitorDelegate;

@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSLifetimeMonitor> {
    NSObject<OS_dispatch_queue> *_queue;
    CLLocationManager *_locationManager;
    CLRegion *_currentRegion;
    BOOL _regionEntered;
    BOOL _hasActiveLifetimes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;

- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)_queue_refreshMonitor;
- (void)refreshMonitorForDate:(id)a0;
- (void)_queue_beginMonitoringCurrentLocation;
- (void)_queue_sendExpiryEventForAllLocationAssertions;
- (void)_queue_geofenceLocation:(id)a0;
- (void)_queue_stopMonitoringCurrentLocation;

@end
