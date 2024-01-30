@class HFPresenceEventBuilder, NSString, HMHome, HUPresenceLocationDeviceFooterItem, HUPresenceUserPickerItemModuleOptions, NSDictionary, HFStaticItemProvider, HUPresenceActivationOptionItem, HULocationDeviceManager;
@protocol HUPresenceUserPickerItemModuleDelegate;

@interface HUPresenceUserPickerItemModule : HFItemModule

@property (class, readonly, copy, nonatomic) NSString *sectionID;
@property (class, readonly, copy, nonatomic) NSString *footerSectionID;

@property (readonly, nonatomic) NSDictionary *activationOptionStateByGranularity;
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (readonly, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HUPresenceUserPickerItemModuleDelegate> delegate;
@property (readonly, nonatomic) HFPresenceEventBuilder *presenceEventBuilder;
@property (retain, nonatomic) HUPresenceUserPickerItemModuleOptions *options;
@property (readonly, nonatomic) HUPresenceLocationDeviceFooterItem *footerItem;
@property (readonly, nonatomic) HUPresenceActivationOptionItem *singleUserSummaryItem;

+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)selectUserItem:(id)a0;
- (unsigned long long)_activationGranularityForUserItem:(id)a0;
- (id)_allSelectedAndSupportedUsers;
- (BOOL)_canDeselectUserHandle:(id)a0;
- (void)_createItemProviders;
- (BOOL)_isPresenceAuthorizedForUser:(id)a0;
- (BOOL)_isUserHandleSelected:(id)a0;
- (void)_resetSelectionForCustomLocation;
- (BOOL)_shouldUseSingleUserStyle;
- (id)_sortedActivationGranularities;
- (void)_updateSelected:(BOOL)a0 forUserHandle:(id)a1;
- (id)activationOptionItemForGranularity:(unsigned long long)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)confirmationPromptForOptionItem:(id)a0;
- (void)deselectUserItem:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 presenceEvent:(id)a2 options:(id)a3 delegate:(id)a4;
- (unsigned long long)itemTypeForItem:(id)a0;
- (void)selectActivationOptionItem:(id)a0;
- (id)stateForActivationOptionItem:(id)a0;
- (id)stateForUserItem:(id)a0;
- (void)toggleExpandedForActivationOptionItem:(id)a0;

@end
