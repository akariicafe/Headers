@class CKRecordID, NSArray, NSData, NSString, NSPersonNameComponents, CKUserIdentityLookupInfo;

@interface CKUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKRecordID *userRecordID;
@property (nonatomic) BOOL hasiCloudAccount;
@property (nonatomic) BOOL isCached;
@property (retain, nonatomic) NSData *publicSharingKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (retain, nonatomic) NSData *outOfNetworkPrivateKey;
@property (retain, nonatomic) NSData *encryptedPersonalInfo;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) CKUserIdentityLookupInfo *lookupInfo;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (BOOL)isEquivalentToUserIdentity:(id)a0;
- (BOOL)isOutOfNetwork;
- (BOOL)isEquivalentToUserIdentityOrPublicKey:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
