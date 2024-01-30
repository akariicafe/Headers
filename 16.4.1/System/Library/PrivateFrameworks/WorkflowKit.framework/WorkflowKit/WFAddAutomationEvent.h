@class NSString;

@interface WFAddAutomationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) unsigned int actionCount;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (copy, nonatomic) NSString *shortcutIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
