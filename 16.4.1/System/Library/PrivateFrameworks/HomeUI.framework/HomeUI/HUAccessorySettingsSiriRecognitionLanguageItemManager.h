@class HUSiriLanguageOptionItemProvider, HFItem, NSString, HFAccessorySettingGroupItem, HFSiriLanguageOptionsManager, HFAccessorySettingSiriLanguageAdapter;
@protocol HFServiceLikeItem;

@interface HUAccessorySettingsSiriRecognitionLanguageItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver>

@property (retain, nonatomic) HUSiriLanguageOptionItemProvider *optionItemProvider;
@property (readonly, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem;
@property (readonly, copy, nonatomic) HFAccessorySettingGroupItem *groupItem;
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 accessorySettingItem:(id)a1 accessoryItem:(id)a2;
- (id)initWithDelegate:(id)a0 groupItem:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)mediaProfileContainer;
- (void)siriLanguageAdapter:(id)a0 availableLanguageOptionsDidChange:(id)a1;
- (void)siriLanguageAdapter:(id)a0 selectedLanguageOptionDidChange:(id)a1;
- (void)siriLanguageOptionsManager:(id)a0 availableLanguageOptionsDidChange:(id)a1;
- (void)siriLanguageOptionsManager:(id)a0 selectedLanguageOptionDidChange:(id)a1;
- (id)updateSelectionWithOptionItem:(id)a0;

@end
