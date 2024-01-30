@class BBContact, NSString, NSArray, NSURL;

@interface BBCommunicationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedObjectUri;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) BBContact *sender;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL systemImage;
@property (readonly, nonatomic) BOOL mentionsCurrentUser;
@property (readonly, nonatomic) BOOL notifyRecipientAnyway;
@property (readonly, nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (readonly, nonatomic) unsigned long long recipientCount;
@property (readonly, nonatomic) long long capabilities;

+ (id)communicationContextWithIdentifier:(id)a0 associatedObjectUri:(id)a1 displayName:(id)a2 sender:(id)a3 recipients:(id)a4 contentURL:(id)a5 imageName:(id)a6 systemImage:(BOOL)a7 mentionsCurrentUser:(BOOL)a8 notifyRecipientAnyway:(BOOL)a9 replyToCurrentUser:(BOOL)a10 recipientCount:(unsigned long long)a11;
+ (id)communicationContextWithIdentifier:(id)a0 bundleIdentifier:(id)a1 associatedObjectUri:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6;
+ (id)communicationContextWithIdentifier:(id)a0 bundleIdentifier:(id)a1 associatedObjectUri:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6 imageName:(id)a7 systemImage:(BOOL)a8 mentionsCurrentUser:(BOOL)a9 notifyRecipientAnyway:(BOOL)a10 replyToCurrentUser:(BOOL)a11 recipientCount:(unsigned long long)a12;
+ (id)communicationContextWithIdentifier:(id)a0 bundleIdentifier:(id)a1 associatedObjectUri:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6 mentionsCurrentUser:(BOOL)a7 notifyRecipientAnyway:(BOOL)a8 replyToCurrentUser:(BOOL)a9 recipientCount:(unsigned long long)a10;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 associatedObjectUri:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6 imageName:(id)a7 systemImage:(BOOL)a8 mentionsCurrentUser:(BOOL)a9 notifyRecipientAnyway:(BOOL)a10 replyToCurrentUser:(BOOL)a11 recipientCount:(unsigned long long)a12 capabilities:(long long)a13;

@end
