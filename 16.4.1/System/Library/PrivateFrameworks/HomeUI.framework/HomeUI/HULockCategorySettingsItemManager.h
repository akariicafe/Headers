@class HMHome, NSString, HFUserItemProvider, HFUserNotificationServiceTopic, HFServiceItemProvider, HFStaticItemProvider, HFStaticItem, HFPinCodeManager;

@interface HULockCategorySettingsItemManager : HFItemManager <HFPinCodeManagerObserver>

@property (retain, nonatomic) HFUserNotificationServiceTopic *topic;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (retain, nonatomic) HFUserItemProvider *userItemProvider;
@property (retain, nonatomic) HFStaticItem *guestsItem;
@property (retain, nonatomic) HFServiceItemProvider *lockServiceItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithDelegate:(id)a0 topic:(id)a1 home:(id)a2;
- (id)initWithDelegate:(id)a0 topic:(id)a1 pinCodeManager:(id)a2 home:(id)a3;

@end
