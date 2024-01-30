@class HUTriggerBuilderItem, HFItem, HFStaticItemProvider, HFEventBuilderItemProvider, HFTriggerBuilder, NSString, NSSet;

@interface HUTriggerEventsItemModule : HFItemModule <HFItemHiding> {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HFEventBuilderItemProvider *triggerEventsItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFItem *addEventButtonItem;
@property (retain, nonatomic) HUTriggerBuilderItem *triggerBuilderItem;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (nonatomic) BOOL hideAddEventButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)_buildItemProviders;
- (id)_itemsToHideInSet:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 itemUpdater:(id)a1;

@end
