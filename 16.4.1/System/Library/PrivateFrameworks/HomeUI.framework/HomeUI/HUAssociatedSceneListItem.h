@class HMHome, HFItem;
@protocol HFServiceLikeItem;

@interface HUAssociatedSceneListItem : HFItem

@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long context;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 serviceLikeItem:(id)a1 context:(unsigned long long)a2;

@end
