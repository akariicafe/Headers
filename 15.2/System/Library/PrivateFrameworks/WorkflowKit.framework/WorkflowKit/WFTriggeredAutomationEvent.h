@class NSString;

@interface WFTriggeredAutomationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *triggerType;
@property (nonatomic) BOOL requiredRuntimeConfirmation;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned int batchDroppedCount;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
