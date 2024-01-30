@class NSXPCConnection;
@protocol HPSettingsConnectionInterfaceDelegate;

@interface HPSHomeInterface : NSObject

@property (weak, nonatomic) id<HPSettingsConnectionInterfaceDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *hpsConnection;
@property (nonatomic) BOOL connectionValid;

+ (id)connectionError;

- (id)initWithDelegate:(id)a0;
- (void)handleConnectionInvalidated;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startConnection;
- (void)handleConnectionInterrupted;
- (void)getCurrentHomeAttribute:(id)a0 completion:(id /* block */)a1;
- (void)setHomeKitSettingForKeyPath:(id)a0 newValue:(id)a1 completion:(id /* block */)a2;
- (void)homeKitAccessorySettingForKeyPath:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)getHomeAccessoryAttribute:(id)a0 completion:(id /* block */)a1;
- (void)getAirPlaySettings:(id /* block */)a0;
- (void)getHomeKitCachedSettings:(id /* block */)a0;
- (void)getAllHomeKitSettingsKeyPath:(id /* block */)a0;
- (void)getHomeKitSettingForKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)homeKitSettingValueForKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)isHomeKitSyncComplete:(id /* block */)a0;
- (void)isValidHome:(id /* block */)a0;
- (void)isAutomaticSoftwareUpdateEnabled:(id /* block */)a0;
- (void)_accessoryDidUpdateAttribute:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_homekitDidUpdateAccessorySettingValueForKeyPath:(id)a0 value:(id)a1 completion:(id /* block */)a2;

@end
