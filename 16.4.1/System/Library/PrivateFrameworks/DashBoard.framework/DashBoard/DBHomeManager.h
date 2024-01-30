@class HMFLocationAuthorization, DBNetworkPathMonitor, NSString, DBLocationManager, NSDictionary, NSObject, HMHomeManager, CARObserverHashTable;
@protocol OS_dispatch_queue;

@interface DBHomeManager : NSObject <DBHomeKitResourceProvider, HMHomeManagerDelegate>

@property (retain, nonatomic) DBLocationManager *locationManager;
@property (retain, nonatomic) DBNetworkPathMonitor *networkPathMonitor;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) HMFLocationAuthorization *homeLocationAuthorization;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSDictionary *homes;
@property (retain) CARObserverHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_authorizeHomeManager;
- (void)_setupHomeManager;

@end
