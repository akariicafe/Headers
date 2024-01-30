@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) long long conversationNotificationLevel;
@property (readonly, nonatomic) long long originalConversationNotificationLevel;
@property long long conversationID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (id)initWithConversationID:(long long)a0 conversationNotificationLevel:(long long)a1 originalConversationNotificationLevel:(long long)a2;
- (id)initWithMessage:(id)a0 conversationNotificationLevel:(long long)a1;

@end
