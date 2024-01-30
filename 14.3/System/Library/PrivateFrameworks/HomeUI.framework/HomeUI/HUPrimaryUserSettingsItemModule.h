@class HFItem, HFStaticItemProvider, HUPrimaryUserItemProvider, HMHome;
@protocol HFMediaProfileContainer;

@interface HUPrimaryUserSettingsItemModule : HFItemModule

@property (retain, nonatomic) HUPrimaryUserItemProvider *primaryUserItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFItem *primaryUserSettingsHeaderItem;
@property (retain, nonatomic) HFItem *homePodAccountSelectionItem;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)updatePrimaryUserSelectionType:(unsigned long long)a0 user:(id)a1;
- (id)_updatePrimaryUserSelectionType:(unsigned long long)a0 user:(id)a1;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 mediaProfileContainer:(id)a2;

@end
