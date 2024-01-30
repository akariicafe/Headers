@class DNDSExplicitRegionStore, NSArray, NSString, NSMutableSet, DNDSLocationTriggerConfiguration;
@protocol DNDSBackingStore, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSAggregateLocationLifetimeMonitor;

@interface DNDSExplicitRegionLocationLifetimeMonitor : NSObject <DNDSLifetimeMonitor, CLLocationManagerDelegate> {
    DNDSLocationTriggerConfiguration *_currentConfiguration;
    NSMutableSet *_enteredRegionIdentifiers;
    NSMutableSet *_enteredRegionIdentifiersPendingExit;
    DNDSExplicitRegionStore *_store;
    id<DNDSBackingStore> _backingStore;
}

@property (weak, nonatomic) id<DNDSAggregateLocationLifetimeMonitor> aggregateMonitor;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)_queue_startMonitoringForRegion:(id)a0;
- (void)_queue_refreshMonitor;
- (void)refreshMonitorForDate:(id)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)_queue_stopMonitoringForRegion:(id)a0;
- (void)_loadDataFromBackingStore;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_queue_invalidateAssertionOnExitFromRegion:(id)a0;
- (void)_queue_takeAssertionOnEntryIntoRegion:(id)a0;
- (id)initWithAggregateMonitor:(id)a0;
- (void)_queue_resolveEnteredRegionIdentifiersWithAssertionRegionIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)_queue_locationMonitorClientIdentifierForModeIdentifier:(id)a0 region:(id)a1;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;

@end
