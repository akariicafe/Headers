@class HMHome, HFItem, HFStaticItemProvider;
@protocol HFServiceLikeItem;

@interface HUAssociatedSceneAndTriggerModule : HFItemModule

@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, nonatomic) HFItem *scenesItem;
@property (readonly, nonatomic) HFItem *triggersItem;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 serviceLikeItem:(id)a2 context:(unsigned long long)a3;

@end
