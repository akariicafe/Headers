@class HUTriggerActionFlow, HUShortcutItem, NSSet, HFTriggerBuilder, HFStaticItem, NSString;

@interface HUTriggerActionSetsItemModule : HFItemModule <HFItemHiding> {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HFStaticItem *actionSetsGridItem;
@property (retain, nonatomic) HFStaticItem *serviceActionsGridItem;
@property (retain, nonatomic) HFStaticItem *prioritizedServiceActionsGridItem;
@property (retain, nonatomic) HUShortcutItem *shortcutItem;
@property (readonly, nonatomic) BOOL shouldShowPrioritizedActions;
@property (readonly, nonatomic) HUTriggerActionFlow *flow;
@property (copy, nonatomic) NSSet *prioritizedHomeObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemProviders;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_staticItems;
- (id)_buildItemProviders;
- (id)_itemsToHideForStandardTriggerInSet:(id)a0;
- (BOOL)prioritizedHomeObjectsContainsServices:(id)a0;
- (BOOL)prioritizedHomeObjectsContainsMediaProfiles:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 itemUpdater:(id)a2;

@end
