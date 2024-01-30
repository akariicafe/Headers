@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (readonly, nonatomic) EMMessage *referenceMessage;

+ (long long)conversationNotificationLevel;

- (id)_changeAction;
- (id)messageFlags;
- (id)initWithReferenceMessage:(id)a0 delegate:(id)a1 reason:(long long)a2;
- (void)_toggleFlagWithBuilder:(id)a0;

@end
