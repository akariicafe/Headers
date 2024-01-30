@class NSSet, HFTriggerNaturalLanguageOptions, NSMutableSet, HFEventTriggerBuilder, HMHome;

@interface HFEventBuilderItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *lastUpdateEventBuilders;
@property (retain, nonatomic) NSSet *lastUpdateEventGroups;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *naturalLanguageOptions;
@property (retain, nonatomic) NSMutableSet *eventBuilderItems;
@property (retain, nonatomic) NSSet *eventBuilders;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long nameType;

- (id)_reloadItems;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)reloadBuilderGroups;
- (id)eventBuilderGroupsForEventBuilders:(id)a0;
- (id)initWithTriggerBuilder:(id)a0;
- (id)initWithEventBuilders:(id)a0 inHome:(id)a1;

@end
