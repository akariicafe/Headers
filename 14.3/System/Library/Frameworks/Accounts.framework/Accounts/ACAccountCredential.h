@class NSSet, NSString, NSMutableDictionary, NSDate, NSMutableSet, ACAccount;

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
}

@property (class, readonly, copy) NSSet *allSupportedKeys;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresTouchID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *oauthTokenSecret;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) NSSet *dirtyProperties;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (copy, nonatomic) NSString *oauthTokenNoSync;
@property (copy, nonatomic) NSString *oauthRefreshToken;
@property (retain, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *findMyiPhoneToken;
@property (copy, nonatomic) NSString *mapsToken;
@property (copy, nonatomic) NSString *mdmServerToken;
@property (copy, nonatomic) NSString *hsaToken;
@property (copy, nonatomic) NSDate *tokenExpiryDate;
@property (copy, nonatomic) NSString *oauthToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)credentialWithOAuthToken:(id)a0 tokenSecret:(id)a1;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)a0 key:(id)a1 clientID:(id)a2;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)a0 credentialType:(id)a1;
+ (id)credentialWithPassword:(id)a0;
+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)a0;
+ (id)supportedKeysForAccountTypeIdentifier:(id)a0 credentialType:(id)a1;

- (id)initWithOAuth2Token:(id)a0 refreshToken:(id)a1 expiryDate:(id)a2;
- (id)credentialItemForKey:(id)a0;
- (void)setCredentialItem:(id)a0 forKey:(id)a1;
- (id)_encodeProtobufData;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithProtobuf:(id)a0;
- (id)_initWithProtobufData:(id)a0;
- (id)credentialItems;
- (id)_encodeProtobuf;
- (void)_markPropertyDirty:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setOwningAccount:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPassword:(id)a0;
- (void)_clearDirtyProperties;
- (id)keysForCredentialItems;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOAuthToken:(id)a0 tokenSecret:(id)a1;

@end
