@class HUSiriLanguageOptionItemProvider, NSString, HFAccessorySettingGroupItem, HFAccessorySettingSiriLanguageAdapter;

@interface HUAccessorySettingsSiriRecognitionLanguageItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver>

@property (retain, nonatomic) HUSiriLanguageOptionItemProvider *optionItemProvider;
@property (readonly, copy, nonatomic) HFAccessorySettingGroupItem *groupItem;
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)siriLanguageAdapter:(id)a0 availableLanguageOptionsDidChange:(id)a1;
- (void)siriLanguageAdapter:(id)a0 selectedLanguageOptionDidChange:(id)a1;
- (id)initWithDelegate:(id)a0 groupItem:(id)a1;
- (id)updateSelectionWithOptionItem:(id)a0;

@end
