@class NSString;

@interface WFAddAutomationActionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *shortcutIdentifier;
@property (nonatomic) unsigned int actionIndex;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
