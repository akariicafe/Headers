@class CKRecordID, NSArray, NSData, NSString, NSPersonNameComponents, CKUserIdentityLookupInfo;

@interface CKUserIdentity : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEquivalentToUserIdentity:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalentToUserIdentityOrPublicKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (BOOL)isOutOfNetwork;

@end
