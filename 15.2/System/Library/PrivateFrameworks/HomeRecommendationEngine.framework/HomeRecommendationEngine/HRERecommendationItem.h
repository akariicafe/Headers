@class HRERecommendation;

@interface HRERecommendationItem : HFItem

@property (retain, nonatomic) HRERecommendation *recommendation;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) unsigned long long accessoryCountType;

- (id)initWithRecommendation:(id)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;

@end
