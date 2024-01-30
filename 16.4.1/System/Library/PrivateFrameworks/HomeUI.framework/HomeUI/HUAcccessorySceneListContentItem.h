@class HMHome, HFItem;
@protocol HFServiceLikeItem;

@interface HUAcccessorySceneListContentItem : HFItem

@property (readonly, nonatomic) unsigned long long contentSource;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithContentSource:(unsigned long long)a0 serviceLikeItem:(id)a1 home:(id)a2;

@end
