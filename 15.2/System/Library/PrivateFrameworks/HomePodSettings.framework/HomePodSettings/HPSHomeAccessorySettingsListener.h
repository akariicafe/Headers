@class NSXPCListener, NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HPSHomeAccessorySettingsConnectionListenerInterfaceDelegete;

@interface HPSHomeAccessorySettingsListener : NSObject <NSXPCListenerDelegate, HPSHomeAccessorySettingsConnectionListenerInterfaceDelegete, HPSHomeAccessorySettingsProviderDelegate>

@property (retain, nonatomic) NSXPCListener *homeSettingServerListener;
@property (retain, nonatomic) NSMutableArray *endpointClients;
@property (retain) NSObject<OS_dispatch_queue> *settingsSessionClientsSerialQueue;
@property (retain) NSMutableDictionary *connectionProviderList;
@property (weak, nonatomic) id<HPSHomeAccessorySettingsConnectionListenerInterfaceDelegete> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleClientDisconnection:(id)a0;
- (void)sendFetchAccessorySettingsValueForEndPointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSubscribeRequestToAccessorySettingsForEndPointIdentifier:(id)a0 keypath:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendUnsubscribeRequestToAccessorySettingsForEndPointIdentifier:(id)a0 keypath:(id)a1 completionHandler:(id /* block */)a2;
- (id)_currentConnectionAccessorySettingsProvider;
- (void)destroyResources;
- (void)connectionProvider:(id)a0 notifyConnectionSessionDelegate:(id)a1 accessoryDidUpdateSettingForEndPointIdentifier:(id)a2 keyPath:(id)a3 value:(id)a4;

@end
