@class NSString, NSData;

@interface WFConfiguredTriggerRealmObject : RLMObject <WFRecordStorage>

@property (copy, nonatomic) NSString *triggerID;
@property (copy, nonatomic) NSString *workflowID;
@property (copy, nonatomic) NSData *triggerData;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredProperties;
+ (id)primaryKey;
+ (id)defaultPropertyValues;

@end
