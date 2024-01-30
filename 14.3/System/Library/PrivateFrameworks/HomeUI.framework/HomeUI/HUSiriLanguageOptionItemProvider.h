@class NSSet, HFAccessorySettingSiriLanguageAdapter;

@interface HUSiriLanguageOptionItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *items;
@property (readonly, nonatomic) unsigned long long optionStyle;
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter;

- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithAdapter:(id)a0 optionStyle:(unsigned long long)a1;

@end
