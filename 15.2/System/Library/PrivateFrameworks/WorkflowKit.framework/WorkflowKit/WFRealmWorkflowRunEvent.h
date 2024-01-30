@class NSString, NSDate, WFRealmWorkflow;

@interface WFRealmWorkflowRunEvent : RLMObject <WFRecordStorage>

@property (copy) NSString *identifier;
@property (retain) WFRealmWorkflow *workflow;
@property (retain) NSDate *date;
@property NSString *source;
@property (copy) NSString *triggerID;
@property long long outcome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)className;
+ (id)requiredProperties;
+ (id)primaryKey;
+ (id)defaultPropertyValues;

- (void).cxx_destruct;
- (id)descriptor;

@end
