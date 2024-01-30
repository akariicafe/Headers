@class DNDSExplicitRegionLocationLifetimeMonitor, NSString, NSArray, CLLocationManager, DNDSMeDeviceService, NSObject, DNDSUntilExitLocationLifetimeMonitor;
@protocol OS_dispatch_queue, DNDSLifetimeMonitorDelegate, DNDSLocationLifetimeMonitorDataSource;

@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSAggregateLocationLifetimeMonitor, DNDSMeDeviceServiceListener, DNDSLifetimeMonitor> {
    DNDSMeDeviceService *_meDeviceService;
    DNDSUntilExitLocationLifetimeMonitor *_untilExitMonitor;
    DNDSExplicitRegionLocationLifetimeMonitor *_explicitRegionMonitor;
    NSArray *_children;
}

@property (weak, nonatomic) id<DNDSLocationLifetimeMonitorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CLLocationManager *locationManager;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long availableRegions;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;

- (void)meDeviceService:(id)a0 didReceiveMeDeviceStateUpdate:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)refreshMonitorForDate:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void).cxx_destruct;
- (id)initWithMeDeviceService:(id)a0;
- (void)_queue_refreshMonitorForDate:(id)a0;

@end
