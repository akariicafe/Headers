@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) unsigned long long recipientCount;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
