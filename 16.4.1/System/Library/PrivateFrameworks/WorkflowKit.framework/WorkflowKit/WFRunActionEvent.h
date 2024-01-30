@class NSString;

@interface WFRunActionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL didRunRemotely;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL isInvalidatedSystemAction;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
