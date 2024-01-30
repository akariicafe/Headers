@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord

@property (copy, nonatomic) NSData *triggerData;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *suggestionData;

- (void).cxx_destruct;

@end
