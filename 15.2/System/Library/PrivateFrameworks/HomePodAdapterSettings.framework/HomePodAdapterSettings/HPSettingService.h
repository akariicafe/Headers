@class NSString, NSXPCConnection;

@interface HPSettingService : NSObject <HPXPCSettingServiceInterface>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)fetchHomeKitCachedSettingsInternal:(id /* block */)a0;
- (void)accessorySettingKeyPathValueInternal:(id /* block */)a0 keyPath:(id)a1;
- (void)homeKitSettingKeyPathValueForAccessoryInternal:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)accessorySettingKeyPathValueForHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPath:(id)a2 completionHandler:(id /* block */)a3;
- (void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)a0 homeIdentifier:(id)a1 keyPath:(id)a2 value:(id)a3 completionHandler:(id /* block */)a4;
- (void)_accessorySettingKeyPathValueForHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPath:(id)a2 internal:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_homeKitSettingKeyPathValueForAccessoryIdentifier:(id)a0 homeIdentifier:(id)a1 keyPath:(id)a2 value:(id)a3 internal:(BOOL)a4 completionHandler:(id /* block */)a5;

@end
