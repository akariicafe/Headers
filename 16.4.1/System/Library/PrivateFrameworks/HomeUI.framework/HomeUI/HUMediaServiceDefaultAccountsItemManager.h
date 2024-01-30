@class HFUserItem, HFItem, HUMediaServiceDefaultAccountsItemModule, NSString, HMHome;

@interface HUMediaServiceDefaultAccountsItemManager : HFItemManager <HUUserItemManager>

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (retain, nonatomic) HUMediaServiceDefaultAccountsItemModule *defaultAccountsItemModule;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *defaultAccountsTitleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithHome:(id)a0 sourceItem:(id)a1 delegate:(id)a2;

@end
