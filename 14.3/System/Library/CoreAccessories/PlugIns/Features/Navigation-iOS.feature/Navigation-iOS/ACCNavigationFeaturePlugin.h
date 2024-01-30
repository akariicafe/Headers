@class ACCiAP2ShimServer, NSMutableDictionary, NSString, ACCNavigationShim, ACCNavigationProvider, NSObject;
@protocol OS_dispatch_queue;

@interface ACCNavigationFeaturePlugin : NSObject <ACCNavigationProviderProtocol, ACCNavigationShimProtocol, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) ACCiAP2ShimServer *iap2server;
@property (retain, nonatomic) ACCNavigationProvider *navigationProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *navigationQueue;
@property (retain, nonatomic) ACCNavigationShim *navigationShim;
@property (retain, nonatomic) NSMutableDictionary *navigationShimAccessoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void).cxx_destruct;
- (void)navigation:(id)a0 stopRouteGuidance:(id)a1 componentList:(id)a2;
- (void)navigation:(id)a0 accessoryAttached:(id)a1;
- (void)navigation:(id)a0 startRouteGuidance:(id)a1 componentList:(id)a2;
- (void)updateRouteGuidanceInfo:(id)a0 componentIdList:(id)a1 accessory:(id)a2;
- (id)_navigationShimAccessoryForConnectionIDNoLock:(unsigned int)a0;
- (void)notifyNavigationAccessoryClientsOfStateChange;
- (id)navigationShimAccessoryForConnectionID:(unsigned int)a0;
- (void)navigation:(id)a0 accessoryDetached:(id)a1;
- (void)updateManeuverInfo:(id)a0 componentIdList:(id)a1 accessory:(id)a2;

@end
