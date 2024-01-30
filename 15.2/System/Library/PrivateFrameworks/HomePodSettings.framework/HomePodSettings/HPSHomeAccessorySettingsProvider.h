@class HMAccessorySettingsDataSource, NSString, HPSettingSessionClient;
@protocol HPSHomeAccessorySettingsProviderDelegate;

@interface HPSHomeAccessorySettingsProvider : NSObject <HMAccessorySettingsDataSourceDelegate>

@property (retain, nonatomic) HPSettingSessionClient *hpsSessionClient;
@property (retain, nonatomic) HMAccessorySettingsDataSource *dataSource;
@property (weak, nonatomic) id<HPSHomeAccessorySettingsProviderDelegate> delegate;
@property (copy, nonatomic) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)accessorySettingsDataSource:(id)a0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a1 settings:(id)a2;
- (id)initWithDelegate:(id)a0 clientConnection:(id)a1;
- (void)clearDataSource;
- (void)hps_homeKitSettingsForEndPoint:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)hps_subscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)hps_unsubscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (id)hps_createAccessoryDataSource;
- (void)_homeKitSettingsForEndPoint:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)_subscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)_unsubscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)__subscribeToAccessorySettingsForHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;

@end
