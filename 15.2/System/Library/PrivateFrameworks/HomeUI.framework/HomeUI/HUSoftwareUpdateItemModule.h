@class HFItem, HUSoftwareUpdateInfoItemProvider, NSSet, HMHome;
@protocol HFSoftwareUpdatableItemProtocol;

@interface HUSoftwareUpdateItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem;
@property (readonly, nonatomic) NSSet *accessories;
@property (nonatomic) BOOL hideAppleUpdates;
@property (nonatomic) BOOL hideThirdPartyUpdates;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)itemProviders;
- (void).cxx_destruct;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)_reloadItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2;

@end
