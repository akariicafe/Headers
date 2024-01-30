@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HPSHomeInterface;

@interface HPSServer : NSObject <NSXPCListenerDelegate, HPSImplementer>

@property (retain, nonatomic) NSXPCListener *serverListener;
@property (retain, nonatomic) NSXPCListener *homeSettingServerListener;
@property (retain, nonatomic) NSMutableArray *homePodAccessoryClients;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientInfoSerialQueue;
@property (weak, nonatomic) id<HPSHomeInterface> homeInterfaceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)startConnection;
- (void)handleClientDisconnection:(id)a0;
- (void)getCurrentHomeAttribute:(id)a0 completion:(id /* block */)a1;
- (void)homekitDidUpdateAccessorySettingValueForKeyPath:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)setHomeKitSettingForKeyPath:(id)a0 newValue:(id)a1 completion:(id /* block */)a2;
- (void)homeKitAccessorySettingForKeyPath:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)homekitAccessoryDidUpdateAttribute:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)getHomeAccessoryAttribute:(id)a0 completion:(id /* block */)a1;
- (void)getAirPlaySettings:(id /* block */)a0;
- (void)getHomeKitCachedSettings:(id /* block */)a0;
- (void)getAllHomeKitSettingsKeyPath:(id /* block */)a0;
- (void)getHomeKitSettingForKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)homeKitSettingValueForKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)isHomeKitSyncComplete:(id /* block */)a0;
- (void)isValidHome:(id /* block */)a0;
- (void)isAutomaticSoftwareUpdateEnabled:(id /* block */)a0;

@end
