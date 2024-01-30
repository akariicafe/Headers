@class NSString, NSArray, NSMutableDictionary, DADiscovery, NSMutableSet, DADeviceResolver;
@protocol MRUVendorSpecificDeviceManagerDelegate;

@interface MRUVendorSpecificDeviceManager : NSObject

@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSArray *serviceIdentifiers;
@property (retain, nonatomic) DADiscovery *discovery;
@property (retain, nonatomic) DADeviceResolver *resolver;
@property (retain, nonatomic) NSMutableDictionary *deviceMap;
@property (retain, nonatomic) NSMutableDictionary *coalescedDeviceMap;
@property (retain, nonatomic) NSMutableDictionary *activatingDeviceMap;
@property (retain, nonatomic) NSMutableDictionary *activatedDeviceMap;
@property (retain, nonatomic) NSMutableDictionary *invalidatingDeviceMap;
@property (retain, nonatomic) NSMutableSet *mutableResolverManagedAirPlayRouteIDs;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, copy, nonatomic) NSArray *coalescedDevices;
@property (readonly, copy, nonatomic) NSArray *activatedDeviceIDs;
@property (readonly, copy, nonatomic) NSArray *activatingDeviceIDs;
@property (readonly, copy, nonatomic) NSArray *invalidatingDeviceIDs;
@property (readonly, copy, nonatomic) NSArray *pendingDeviceIDs;
@property (readonly, copy, nonatomic) NSArray *resolverManagedAirPlayRouteIDs;
@property (weak, nonatomic) id<MRUVendorSpecificDeviceManagerDelegate> delegate;

- (void)dealloc;
- (void)stopDiscovery;
- (void).cxx_destruct;
- (void)connectToDevice:(id)a0;
- (void)disconnectAllDevices;
- (void)handleDiscoveryEvent:(id)a0;
- (void)handleResolverEvent:(id)a0;
- (id)initWithAppBundleID:(id)a0 serviceIdentifiers:(id)a1;
- (long long)latestStateForDevice:(id)a0;
- (BOOL)resolverAddNativeRoute:(id)a0 forRouteUID:(id)a1;
- (void)resolverAddNativeRoutes:(id)a0;
- (void)resolverAddVendorSpecificDevice:(id)a0;
- (void)resolverRemoveNativeRouteforRouteUID:(id)a0;
- (void)resolverRemoveNativeRoutes:(id)a0;
- (void)resolverRemoveVendorSpecificRoute:(id)a0;
- (void)resolverSetLastSelectedRoute:(id)a0;
- (void)setDevice:(id)a0 picked:(BOOL)a1;
- (void)startDiscovery;
- (void)updateLocalMapWith:(id)a0 deviceIsLost:(BOOL)a1;

@end
