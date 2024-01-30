@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (readonly, nonatomic) EMMessage *referenceMessage;

+ (long long)conversationNotificationLevel;

- (id)_changeAction;
- (id)messageFlags;
- (void)_toggleFlagWithBuilder:(id)a0;
- (id)initWithReferenceMessage:(id)a0 delegate:(id)a1 reason:(long long)a2;

@end
