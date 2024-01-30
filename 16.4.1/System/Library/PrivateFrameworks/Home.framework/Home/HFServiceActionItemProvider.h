@class HFItemBuilder, NSMutableSet, HFActionSetValueSource, HMActionSet, HMHome;
@protocol HFActionSetValueSourceDelegate, HFActionSetBuilderProtocol;

@interface HFServiceActionItemProvider : HFItemProvider

@property (retain, nonatomic) HMActionSet *actionSet;
@property (retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (retain, nonatomic) NSMutableSet *actionItems;
@property (retain, nonatomic) HFActionSetValueSource *valueSource;
@property (readonly, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HFActionSetValueSourceDelegate> actionSetValueSourceDelegate;
@property (copy, nonatomic) id /* block */ filter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0 actionSetBuilder:(id)a1;
- (id)invalidationReasons;
- (id)_actionItemForCharacteristic:(id)a0 addedActionItems:(id)a1 home:(id)a2;
- (id)_actionItemForMediaProfile:(id)a0 addedActionItems:(id)a1 home:(id)a2;
- (id)_addOrUpdateActionItemWithAction:(id)a0 actionBuilder:(id)a1 addedActionItems:(id)a2 home:(id)a3;
- (id)_addOrUpdateActionItemWithMediaAction:(id)a0 mediaActionBuilder:(id)a1 addedActionItems:(id)a2 home:(id)a3;
- (id)_createActionItemForCharacteristic:(id)a0 home:(id)a1;
- (id)_createActionItemForMediaProfile:(id)a0 home:(id)a1;
- (id)_findServiceActionForIdentifier:(id)a0 addedActionItems:(id)a1;
- (id)initWithHome:(id)a0 actionSet:(id)a1;

@end
