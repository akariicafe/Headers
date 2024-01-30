@class HFItem, HMHome, HFTriggerItem, HRERecommendationItem, NSArray, HMTrigger, NSDictionary, NSString, HFTriggerNaturalLanguageOptions, NSNumber;
@protocol HFServiceLikeItem, HUTriggerLikeItem;

@interface HUAvailableTriggerItem : HFItem <HUTriggerLikeItem>

@property (retain, nonatomic) NSNumber *activeValue;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *preferredRelatedItem;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *triggerNaturalLanguageOptions;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFItem<HUTriggerLikeItem> *sourceItem;
@property (readonly, nonatomic) HFTriggerItem *triggerItem;
@property (readonly, nonatomic) HRERecommendationItem *recommendationItem;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSDictionary *naturalLanguageTitleOptions;
@property (retain, nonatomic) NSArray *relatedServiceLikeItems;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setSourceItem:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (void)_updateNaturalLanguageOptions;
- (id)buildersForActivating:(BOOL)a0 inHome:(id)a1 withContext:(id)a2 serviceLikeItems:(id)a3;
- (id)initWithHome:(id)a0 containingItem:(id)a1 relatedToServiceLikeItems:(id)a2;
- (id)removalTriggerBuildersForTriggers:(id)a0 home:(id)a1 context:(id)a2 relatedItems:(id)a3;
- (void)replaceSourceItem:(id)a0;
- (void)resetActiveToDefault;

@end
