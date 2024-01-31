@class CKRecordID, NSArray, NSData, NSString, NSPersonNameComponents, CKUserIdentityLookupInfo;

@interface CKUserIdentity : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CKRecordID *userRecordID;
@property BOOL hasiCloudAccount;
@property BOOL isCached;
@property (copy) NSData *publicSharingKey;
@property unsigned long long publicKeyVersion;
@property (copy) NSData *outOfNetworkPrivateKey;
@property (copy) NSData *encryptedPersonalInfo;
@property (copy) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *firstName;
@property (readonly, copy) NSString *lastName;
@property (copy) CKUserIdentityLookupInfo *lookupInfo;
@property (copy) NSPersonNameComponents *nameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)redactedDescription;
- (id)initInternal;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserRecordID:(id)a0;
- (BOOL)isEquivalentToUserIdentity:(id)a0;
- (BOOL)isEquivalentToUserIdentityOrPublicKey:(id)a0;
- (BOOL)isOutOfNetwork;

@end
