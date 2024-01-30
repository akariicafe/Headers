@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord

@property (copy, nonatomic) NSData *triggerData;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) int source;
@property (nonatomic) int notificationLevel;

- (void).cxx_destruct;

@end
