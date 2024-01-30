@class NSSet, WFDebouncer, WFConfiguredTrigger, WFWorkflowReference;

@interface VCTriggerNotificationDebouncerItem : NSObject

@property (readonly, nonatomic) WFConfiguredTrigger *configuredTrigger;
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (retain, nonatomic) NSSet *triggerEventIDs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguredTrigger:(id)a0 reference:(id)a1 triggerEventIDs:(id)a2 debouncer:(id)a3;

@end
