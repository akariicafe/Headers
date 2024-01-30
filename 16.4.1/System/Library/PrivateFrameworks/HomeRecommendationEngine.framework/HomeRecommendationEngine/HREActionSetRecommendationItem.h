@class HRERecommendationItem, HREActionSetRecommendation, HFItem;
@protocol HFServiceLikeItem;

@interface HREActionSetRecommendationItem : HFItem

@property (readonly, nonatomic) HRERecommendationItem *recommendationItem;
@property (readonly, nonatomic) HREActionSetRecommendation *recommendation;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;

- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithRecommendationItem:(id)a0;

@end
