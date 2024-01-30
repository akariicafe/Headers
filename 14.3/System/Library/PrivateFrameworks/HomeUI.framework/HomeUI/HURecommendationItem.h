@class HMTrigger, NSString, HRERecommendation;

@interface HURecommendationItem : HFItem <HUTriggerLikeItem>

@property (readonly, nonatomic) HMTrigger *trigger;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HRERecommendation *recommendation;
@property (nonatomic, getter=isSelected) BOOL selected;

- (id)initWithRecommendation:(id)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;

@end
