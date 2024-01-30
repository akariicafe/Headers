@class NSString;

@interface WFRunShortcutErrorEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorCode;
@property (nonatomic) BOOL didRunRemotely;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
