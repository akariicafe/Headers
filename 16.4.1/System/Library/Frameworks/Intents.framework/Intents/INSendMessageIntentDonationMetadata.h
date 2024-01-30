@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (nonatomic, getter=isBusinessChat) BOOL businessChat;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) unsigned long long recipientCount;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
