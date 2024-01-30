@class NSString, HFItem, NSSet, HFTriggerBuilder;

@interface HUTriggerMediaItemModule : HFItemModule <HFItemHiding> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HFItem *mediaRowItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)_itemsToHideInSet:(id)a0;
- (id)_staticItems;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 itemUpdater:(id)a1;

@end
