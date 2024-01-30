@class NSXPCListener, NSString;

@interface HPSettingListener : NSObject <NSXPCListenerDelegate, HPXPCSettingServiceInterface>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)fetchHomeKitCachedSettingsInternal:(id /* block */)a0;
- (void)accessorySettingKeyPathValueInternal:(id /* block */)a0 keyPath:(id)a1;
- (void)homeKitSettingKeyPathValueForAccessoryInternal:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)accessorySettingKeyPathValueForHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPath:(id)a2 completionHandler:(id /* block */)a3;
- (void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)a0 homeIdentifier:(id)a1 keyPath:(id)a2 value:(id)a3 completionHandler:(id /* block */)a4;

@end
