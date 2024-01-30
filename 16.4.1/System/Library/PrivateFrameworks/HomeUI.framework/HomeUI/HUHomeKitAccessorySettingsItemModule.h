@class NSSet, HFItem, NSString, HFHomeKitAccessorySettingsItemProvider, HMAccessorySettingsController, NSObject, HMHome;
@protocol HFServiceLikeItem, HFAccessorySettingsManagerProtocol;

@interface HUHomeKitAccessorySettingsItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceItem;
@property (copy, nonatomic) NSString *settingGroupKeyPath;
@property (nonatomic) BOOL isCollapsed;
@property (retain, nonatomic) HFHomeKitAccessorySettingsItemProvider *accessorySettingsItemProvider;
@property (retain, nonatomic) NSObject<HFAccessorySettingsManagerProtocol> *accessorySettingsManager;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithSettingsController:(id)a0 itemUpdater:(id)a1 home:(id)a2 sourceItem:(id)a3 settingGroupKeyPath:(id)a4 isCollapsed:(BOOL)a5;

@end
