@class HFItem;
@protocol HFServiceLikeItem;

@interface HUAccessorySceneListItemManager : HFItemManager

@property (readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly, nonatomic) HFItem *existingScenesContentItem;
@property (readonly, nonatomic) HFItem *suggestedScenesContentItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 serviceLikeItem:(id)a1;

@end
