@class HFStaticItemProvider, HUInstructionsItem, HFItem, HUTriggerConditionEditorItemModule, HUCharacteristicEventOptionProvider;
@protocol HFServiceVendor;

@interface HUCharacteristicTriggerEventItemManager : HFItemManager

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFItem *serviceNameItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HUCharacteristicEventOptionProvider *optionProvider;
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem;
@property (retain, nonatomic) HFItem *activeOptionItem;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule;

+ (id)serviceVendingItemForCharacteristicTriggerBuilder:(id)a0;
+ (id /* block */)_optionItemComparator;
+ (id)_titleForItemSection:(id)a0;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithCharacteristicTriggerBuilder:(id)a0 delegate:(id)a1;

@end
