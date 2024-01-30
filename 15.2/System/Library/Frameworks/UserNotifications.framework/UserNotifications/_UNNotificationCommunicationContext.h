@class NSString, NSArray, NSURL, _UNNotificationContact;

@interface _UNNotificationCommunicationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedObjectUri;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) _UNNotificationContact *sender;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic, getter=isSystemImage) BOOL systemImage;
@property (readonly, nonatomic) BOOL mentionsCurrentUser;
@property (readonly, nonatomic) BOOL notifyRecipientAnyway;
@property (readonly, nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (readonly, nonatomic) unsigned long long recipientCount;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly, nonatomic, getter=isDirect) BOOL direct;
@property (readonly, copy, nonatomic) NSArray *allContacts;
@property (readonly, copy, nonatomic) NSString *preferredSenderSummary;
@property (readonly, copy, nonatomic) NSString *preferredRecipientsSummary;
@property (readonly, copy, nonatomic) NSString *preferredDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_effectiveAllContactsCount;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 associatedObjectUri:(id)a1 bundleIdentifier:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6 imageName:(id)a7 systemImage:(BOOL)a8 mentionsCurrentUser:(BOOL)a9 notifyRecipientAnyway:(BOOL)a10 replyToCurrentUser:(BOOL)a11 recipientCount:(unsigned long long)a12;
- (BOOL)isAvatarImagePossible;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)_summaryFromContacts:(id)a0 effectiveCount:(unsigned long long)a1 includeMe:(BOOL)a2;
- (unsigned long long)_effectiveRecipientCount;

@end
