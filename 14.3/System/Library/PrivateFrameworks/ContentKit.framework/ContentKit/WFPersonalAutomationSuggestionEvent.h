@class NSString;

@interface WFPersonalAutomationSuggestionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL interacted;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *triggerType;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
