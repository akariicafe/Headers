@class HFItem, HUSoftwareUpdateInfoItemProvider, HUSoftwareUpdateActionAndProgressItem, NSSet, HFStaticItem, HMHome;
@protocol HFSoftwareUpdatableItemProtocol;

@interface HUSoftwareUpdateItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HUSoftwareUpdateActionAndProgressItem *actionAndProgressItem;
@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (retain, nonatomic) HFStaticItem *learnMoreItem;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem;
@property (readonly, nonatomic) NSSet *accessories;
@property (nonatomic) BOOL unifyDownloadAndDescriptionSections;
@property (nonatomic) BOOL hideAppleUpdates;
@property (nonatomic) BOOL hideThirdPartyUpdates;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)itemProviders;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithItemUpdater:(id)a0;
- (void)_reloadItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2;

@end
