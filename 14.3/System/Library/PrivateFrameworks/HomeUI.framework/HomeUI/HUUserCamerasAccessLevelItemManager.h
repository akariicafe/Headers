@class HFUserItem, HFItem, NSArray, HMUser, NSString, HMHome;

@interface HUUserCamerasAccessLevelItemManager : HFItemManager <HUUserItemManager>

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) NSArray *accessLevelItems;
@property (readonly, nonatomic) HMUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithHome:(id)a0 userItem:(id)a1 delegate:(id)a2;
- (BOOL)_isUserOwner:(id)a0;
- (BOOL)_isEditingAllowedForUser:(id)a0;
- (BOOL)_isUserBeingEditedTheDeviceUser;
- (BOOL)_isAllowedToEditTargetUser;
- (id)_cameraAccessLevels;
- (unsigned long long)_accessLevelForUser:(id)a0;

@end
