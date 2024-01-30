@class HMHome, NSString, DBNetworkPathMonitor, NSArray, DBLocationManager, NSMutableDictionary, NSDictionary, DBGarageDoor, NSMutableSet, NSUUID, CARObserverHashTable, CLLocation;

@interface DBHome : NSObject <DBLocationManagerObserver, DBNetworkPathMonitorObserver, HMHomeDelegatePrivate, DBHomeKitEntity> {
    NSMutableSet *_updatingLastUsedServiceTypes;
}

@property (class, readonly, nonatomic) double maxDistance;

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) NSDictionary *cachedGarageDoors;
@property (readonly, nonatomic) BOOL hasCachedGarageDoors;
@property (readonly, nonatomic) NSMutableSet *updatingLastUsedServiceTypes;
@property (readonly, nonatomic) NSMutableDictionary *lastUsedIdentifiersByServiceType;
@property (nonatomic) BOOL garageDoorRefreshScheduled;
@property (readonly, nonatomic) NSString *formattedUniqueIdentifier;
@property (readonly, nonatomic) DBLocationManager *locationManager;
@property (nonatomic) BOOL previouslyInRange;
@property (nonatomic) BOOL inExtendedRange;
@property (nonatomic) double lastLoggedDistance;
@property (readonly, nonatomic) DBNetworkPathMonitor *networkPathMonitor;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL inRange;
@property (readonly, nonatomic) BOOL hasGarageDoor;
@property (readonly, nonatomic) NSArray *garageDoors;
@property (readonly, nonatomic) DBGarageDoor *lastUsedGarageDoor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL usable;
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) double distance;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocation:(id)a1;
- (void)addObserver:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)home:(id)a0 didUpdateLocation:(id)a1;
- (void)homeDidUpdateHomeLocationStatus:(id)a0;
- (BOOL)inLocationRange;
- (void)_scheduleGarageDoorRefresh;
- (void)_setValue:(id)a0 forCharacteristic:(id)a1 completion:(id /* block */)a2;
- (void)_updateCachedGarageDoors;
- (void)_updateInRangeIfNeeded;
- (void)_updateLastUsedServiceOfType:(id)a0;
- (BOOL)inHomeRange;
- (id)initWithHome:(id)a0 resourceProvider:(id)a1;
- (void)locationManager:(id)a0 didEnterRegionIdentifier:(id)a1;
- (void)locationManager:(id)a0 didExitRegionIdentifier:(id)a1;
- (void)networkPathMonitor:(id)a0 didChangeNetworkReachable:(BOOL)a1;
- (void)networkPathMonitorDidChangeNetworkPath:(id)a0;
- (void)refreshGarageDoors;

@end
