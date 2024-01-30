@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem

@property (readonly, nonatomic) unsigned long long optionStyle;
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (retain, nonatomic) HFSiriLanguageOption *languageOption;

+ (id)selectionKeyForLanguageOption:(id)a0 withOptionStyle:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithStyle:(unsigned long long)a0 adapter:(id)a1 languageOption:(id)a2;

@end
