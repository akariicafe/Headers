@class HFUserItem, HFItem, HMUser, NSString, HMHome;

@interface HURemoteAccessItemManager : HFItemManager <HUUserItemManager>

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFItem *allowRemoteAccessItem;
@property (retain, nonatomic) HFItem *allowRemoteAccessFooterItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HMUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_isUserBeingEditedTheDeviceUser;
- (id)initWithHome:(id)a0 userItem:(id)a1 delegate:(id)a2;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_hasResidentDevice;
- (id)_homeFuture;
- (BOOL)_isAllowedToEditTargetUser;
- (BOOL)_isEditingAllowedForUser:(id)a0;
- (BOOL)_isRemoteAccessAllowedForUser:(id)a0;
- (BOOL)_isUserOwner:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
