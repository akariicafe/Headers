@class COHomeKitAdapter;

@interface COMeshHomeKitAddOn : COMeshAddOn

@property (readonly, nonatomic) COHomeKitAdapter *adapter;

- (void)accessoryCollectionSetting:(id)a0 addItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)accessorySetting:(id)a0 updateValue:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleHomeKitSettingsRequest:(id)a0 callback:(id /* block */)a1;
- (void)accessoryCollectionSetting:(id)a0 replaceItems:(id)a1 withItems:(id)a2 completionHandler:(id /* block */)a3;
- (id)requestSettingsForKeyPath:(id)a0 onAccessory:(id)a1;
- (void)accessoryCollectionSetting:(id)a0 replaceItem:(id)a1 withItem:(id)a2 completionHandler:(id /* block */)a3;
- (void)accessoryCollectionSetting:(id)a0 removeItem:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAdapter:(id)a0;
- (void).cxx_destruct;
- (void)handleHomeKitSettingUpdateRequest:(id)a0 callback:(id /* block */)a1;
- (id)init;
- (void)willRemoveFromMeshController:(id)a0;
- (void)handleHomeKitCollectionSettingUpdateRequest:(id)a0 callback:(id /* block */)a1;
- (void)didAddToMeshController:(id)a0;

@end
