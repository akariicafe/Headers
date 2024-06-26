@class NSURL, CKRecordValueStore, NSDate, NSDictionary, CKReference, CKContainerID, NSString, CKRecordID, CKEncryptedRecordValueStore, NSSet, NSArray, NSData, CKEncryptedData;
@protocol CKRecordKeyValueSetting;

@interface CKRecord : NSObject <CKContainerAssignment, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) unsigned long long assetDiskSize;
@property (readonly, nonatomic) BOOL containsPackageValues;
@property (readonly, nonatomic) BOOL hasPropertiesRequiringEncryption;
@property (readonly, nonatomic) BOOL hasModifiedPropertiesRequiringEncryption;
@property (readonly, nonatomic) BOOL hasPropertiesRequiringDecryption;
@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (readonly, nonatomic) BOOL hasModifiedEncryptedData;
@property (nonatomic) BOOL serializeProtectionData;
@property (retain, nonatomic) NSData *zoneishKeyID;
@property (retain, nonatomic) NSString *previousProtectionEtag;
@property (retain, nonatomic) NSString *protectionEtag;
@property (retain, nonatomic) NSString *zoneProtectionEtag;
@property (retain, nonatomic) NSString *shareEtag;
@property (readonly, nonatomic) NSString *fullToken;
@property (readonly, nonatomic) NSData *shortSharingTokenData;
@property (readonly, nonatomic) NSData *shortSharingTokenHashData;
@property (readonly, nonatomic) NSData *encryptedFullTokenData;
@property (retain, nonatomic) NSString *previousProtectionEtagFromUnitTest;
@property (retain, nonatomic) NSData *pcsKeyID;
@property (retain, nonatomic) NSArray *allPCSKeyIDs;
@property (copy, nonatomic) CKReference *share;
@property (retain, nonatomic) CKReference *previousShare;
@property (nonatomic) BOOL hasUpdatedShare;
@property (retain, nonatomic) CKReference *previousParent;
@property (nonatomic) BOOL hasUpdatedParent;
@property (retain, nonatomic) CKEncryptedData *chainPrivateKey;
@property (retain, nonatomic) CKEncryptedData *mutableEncryptedPSK;
@property (retain, nonatomic) NSData *chainProtectionInfo;
@property (retain, nonatomic) NSData *chainParentPublicKeyID;
@property (retain, nonatomic) NSArray *tombstonedPublicKeyIDs;
@property (readonly, nonatomic) NSString *privateToken;
@property (copy, nonatomic) NSURL *mutableURL;
@property (copy, nonatomic) CKRecordID *recordID;
@property (copy, nonatomic) CKRecordID *creatorUserRecordID;
@property (copy, nonatomic) CKRecordID *lastModifiedUserRecordID;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic, getter=isKnownToServer) BOOL knownToServer;
@property (nonatomic) BOOL wasCached;
@property (readonly, nonatomic) unsigned long long size;
@property long long permission;
@property (copy, nonatomic) NSDictionary *pluginFields;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSArray *conflictLoserEtags;
@property (copy, nonatomic) NSString *modifiedByDevice;
@property (readonly, nonatomic) BOOL containsAssetValues;
@property (copy, nonatomic) NSData *protectionData;
@property (nonatomic) BOOL wantsChainPCS;
@property (readonly, nonatomic) BOOL hasChainPCS;
@property (nonatomic) BOOL useLightweightPCS;
@property (copy, nonatomic) NSString *routingKey;
@property (copy, nonatomic) NSString *baseToken;
@property (readonly, copy, nonatomic) NSString *shortToken;
@property (nonatomic) BOOL wantsPublicSharingKey;
@property (readonly, copy, nonatomic) NSData *encryptedPublicSharingKey;
@property (copy, nonatomic) CKEncryptedData *mutableEncryptedPublicSharingKey;
@property (copy, nonatomic) NSData *mutableEncryptedPublicSharingKeyData;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSURL *uncachedURL;
@property (copy, nonatomic) NSString *displayedHostname;
@property (copy, nonatomic) CKRecordValueStore *valueStore;
@property (copy, nonatomic) CKEncryptedRecordValueStore *encryptedValueStore;
@property (readonly, copy, nonatomic) NSDictionary *values;
@property (readonly, copy, nonatomic) NSDictionary *originalValues;
@property (copy, nonatomic) NSSet *changedKeysSet;
@property (nonatomic) BOOL trackChanges;
@property (readonly, copy, nonatomic) id<CKRecordKeyValueSetting> encryptedValuesByKey;
@property (readonly, copy, nonatomic) id<CKRecordKeyValueSetting> valuesByKey;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordChangeTag;
@property (copy, nonatomic) CKReference *parent;

+ (id)recordWithDuplicatedPackagesOfRecord:(id)a0 error:(id *)a1;
+ (id)fullTokenFromBaseToken:(id)a0 privateToken:(id)a1;
+ (id)keyForFetchingItems:(unsigned long long)a0 atEndOfListField:(id)a1;
+ (id)decryptFullToken:(id)a0 shortSharingTokenData:(id)a1;
+ (id)keyForAppendingToListField:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)keyForInsertingIntoListField:(id)a0 atIndex:(long long)a1;
+ (id)encryptFullToken:(id)a0 shortSharingTokenData:(id)a1;
+ (id)shareURLWithShortToken:(id)a0 shareTitle:(id)a1 shareType:(id)a2 containerID:(id)a3 displayedHostname:(id)a4;
+ (id)keyForListField:(id)a0 withIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (void)setRecordType:(id)a0;
- (void)_validateRecordName:(id)a0;
- (void)_validateRecordType:(id)a0;
- (id)_initSkippingValidationWithRecordType:(id)a0 recordID:(id)a1;
- (id)_allStrings;
- (id)shortSharingToken;
- (unsigned long long)_sizeOfRecordID:(id)a0;
- (unsigned long long)_sizeOfRecordValue:(id)a0 forKey:(id)a1;
- (id)initWithRecordType:(id)a0;
- (void)encodeSystemFieldsWithCoder:(id)a0;
- (BOOL)_valueIsUsingCKEncryptedData:(id)a0;
- (id)initWithRecordType:(id)a0 zoneID:(id)a1;
- (id)copyWithOriginalValues;
- (BOOL)canHostServerURLInfo;
- (id)decryptFullToken:(id)a0;
- (BOOL)_checkProperties:(BOOL)a0 encryptedStore:(BOOL)a1 withValueCheckBlock:(id /* block */)a2;
- (void)setParentReferenceFromRecord:(id)a0;
- (void)setParentReferenceFromRecordID:(id)a0;
- (void)preTiboEncodeWithCoder:(id)a0;
- (void)setStreamingAssetRequestOptions:(id)a0;
- (void)releasePackages;
- (void)removePackages;
- (void)resetChangedKeys;
- (id)valueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)allValues;
- (id)description;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (id)allTokens;
- (id)initWithRecordTransport:(id)a0;
- (id)changedKeys;
- (id)debugDescription;
- (void)CKAssignToContainerWithID:(id)a0;
- (void)claimPackagesWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;

@end
