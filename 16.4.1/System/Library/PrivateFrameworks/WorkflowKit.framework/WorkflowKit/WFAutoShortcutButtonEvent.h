@class NSString;

@interface WFAutoShortcutButtonEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
