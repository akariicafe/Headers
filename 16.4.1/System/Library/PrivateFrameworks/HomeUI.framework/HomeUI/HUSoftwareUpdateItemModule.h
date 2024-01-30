@class HFItem, HUSoftwareUpdateInfoItemProvider, NSSet, HMHome;
@protocol HFSoftwareUpdatableItemProtocol;

@interface HUSoftwareUpdateItemModule : HFItemModule

@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem;
@property (readonly, nonatomic) NSSet *accessories;
@property (nonatomic) BOOL hideAppleUpdates;
@property (nonatomic) BOOL hideThirdPartyUpdates;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)_reloadItemProviders;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2;

@end
