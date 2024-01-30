@class NSString;

@interface WFSuspendShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *presentationStyle;
@property (copy, nonatomic) NSString *dismissalType;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
