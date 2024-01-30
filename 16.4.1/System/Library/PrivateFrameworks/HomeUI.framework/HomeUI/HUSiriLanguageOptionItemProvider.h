@class NSSet, HFItem, HFSiriLanguageOptionsManager, HFAccessorySettingSiriLanguageAdapter;

@interface HUSiriLanguageOptionItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager;
@property (retain, nonatomic) HFItem *sourceItem;
@property (readonly, nonatomic) unsigned long long optionStyle;
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter;

- (void).cxx_destruct;
- (id)reloadItems;
- (id)_createSiriLanguageOptionItems:(id)a0;
- (id)_reloadItemsWithAdapter;
- (id)_reloadItemsWithSiriLanguageOptionsManager;
- (id)initWithAdapter:(id)a0 optionStyle:(unsigned long long)a1;
- (id)initWithSiriLanguageOptionsManager:(id)a0 sourceItem:(id)a1 optionStyle:(unsigned long long)a2;

@end
