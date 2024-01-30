@class NSUUID, NSString, TUUserConfiguration, NSDate, NSData, NSSet, NSURL, TUHandle;

@interface TUConversationLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUUserConfiguration *userConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (retain, nonatomic) TUHandle *originatorHandle;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) long long linkLifetimeScope;
@property (retain, nonatomic) NSString *URLFragment;
@property (copy, nonatomic) NSString *linkName;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSSet *invitedMemberHandles;
@property (readonly, nonatomic) NSURL *URL;

+ (id)prefixedPseudonymFor:(id)a0;
+ (id)conversationLinkForURL:(id)a0;
+ (BOOL)checkMatchingConversationLinkCriteriaForURL:(id)a0;
+ (id)preferredBaseURLString;
+ (unsigned long long)conversationLinkVersion;
+ (id)publicKeyForBase64EncodedString:(id)a0;
+ (id)baseURLComponentsForURL:(id)a0;
+ (id)preferredBaseURL;
+ (id)conversationLinkComponentsFromURL:(id)a0;
+ (id)baseURLs;
+ (id)baseURLStrings;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDescriptor:(id)a0;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3 creationDate:(id)a4 expirationDate:(id)a5 invitedMemberHandles:(id)a6 locallyCreated:(BOOL)a7 linkName:(id)a8 linkLifetimeScope:(long long)a9;
- (id)unprefixedPseudonym;
- (id)base64PublicKey;
- (BOOL)isEqualToConversationLink:(id)a0;
- (BOOL)isEquivalentToPseudonym:(id)a0 andPublicKey:(id)a1;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3;
- (BOOL)canCreateConversations;
- (BOOL)isEquivalentToConversationLink:(id)a0;

@end
