@class NSURL, CKRecordValueStore, NSDate, NSDictionary, CKReference, CKContainerID, NSString, CKRecordID, CKEncryptedRecordValueStore, NSSet, NSArray, NSData, CKEncryptedData, NSNumber;
@protocol CKRecordKeyValueSetting;

@interface CKRecord : NSObject <CKContainerAssignment, CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKContainerID *containerID;
@property (nonatomic) BOOL hasUpdatedExpirationTimeInterval;
@property (copy, nonatomic) NSNumber *updatedExpirationTimeInterval;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) unsigned long long assetDiskSize;
@property (readonly, nonatomic) BOOL containsPackageValues;
@property (readonly, nonatomic) BOOL hasPropertiesRequiringEncryption;
@property (readonly, nonatomic) BOOL hasModifiedPropertiesRequiringEncryption;
@property (readonly, nonatomic) BOOL hasPropertiesRequiringDecryption;
@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (readonly, nonatomic) BOOL hasModifiedEncryptedData;
@property (readonly, nonatomic) BOOL containsIndexedKeys;
@property (nonatomic) BOOL requiresRecordSaveForMergeableDeltas;
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
@property (nonatomic) BOOL isMergeableValueDeltaRecord;
@property (retain, nonatomic) NSString *previousProtectionEtagFromUnitTest;
@property (retain, nonatomic) NSData *pcsKeyID;
@property (retain, nonatomic) NSArray *allPCSKeyIDs;
@property (copy, nonatomic) CKReference *share;
@property (retain, nonatomic) CKReference *previousShare;
@property (nonatomic) BOOL hasUpdatedShare;
@property (retain, nonatomic) CKReference *previousParent;
@property (nonatomic) BOOL hasUpdatedParent;
@property (nonatomic) struct _PCSIdentityData { } *signingPCSIdentity;
@property (retain, nonatomic) CKEncryptedData *chainPrivateKey;
@property (retain, nonatomic) CKEncryptedData *mutableEncryptedPSK;
@property (retain, nonatomic) NSData *chainProtectionInfo;
@property (retain, nonatomic) NSData *chainParentPublicKeyID;
@property (retain, nonatomic) NSArray *tombstonedPublicKeyIDs;
@property (readonly, nonatomic) NSString *privateToken;
@property (copy, nonatomic) NSURL *mutableURL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy, nonatomic) CKRecordID *creatorUserRecordID;
@property (copy, nonatomic) CKRecordID *lastModifiedUserRecordID;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic, getter=isKnownToServer) BOOL knownToServer;
@property (nonatomic) BOOL wasCached;
@property (readonly, nonatomic) unsigned long long size;
@property long long permission;
@property (copy, nonatomic) NSDictionary *pluginFields;
@property (copy, nonatomic) CKRecordID *recordID;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)keyForListField:(id)a0 withIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)decryptFullToken:(id)a0 shortSharingTokenData:(id)a1;
+ (id)encryptFullToken:(id)a0 shortSharingTokenData:(id)a1;
+ (id)fullTokenFromBaseToken:(id)a0 privateToken:(id)a1;
+ (id)keyForAppendingToListField:(id)a0;
+ (id)keyForFetchingItems:(unsigned long long)a0 atEndOfListField:(id)a1;
+ (id)keyForInsertingIntoListField:(id)a0 atIndex:(long long)a1;
+ (id)recordWithDuplicatedPackagesOfRecord:(id)a0 error:(id *)a1;
+ (id)shareURLWithShortToken:(id)a0 shareTitle:(id)a1 shareType:(id)a2 containerID:(id)a3 displayedHostname:(id)a4;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)setNilValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allTokens;
- (void)setRecordType:(id)a0;
- (void)setExpirationAfterTimeInterval:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setExpirationDate:(id)a0;
- (BOOL)containsValueOfClasses:(id)a0 passingTest:(id /* block */)a1;
- (BOOL)containsValuePassingTest:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (BOOL)containsMergeableValues;
- (void)setExpired:(BOOL)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changedKeys;
- (id)valueForKey:(id)a0;
- (void)resetChangedKeys;
- (void)dealloc;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)setStreamingAssetRequestOptions:(id)a0;
- (id)allValues;
- (id)init;
- (void)enumerateKeysAndValuesOfClasses:(id)a0 usingBlock:(id /* block */)a1;
- (id)allKeys;
- (void)enumerateKeysAndValuesOfClasses:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (BOOL)containsValueOfClasses:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)a0;
- (id)encryptedValues;
- (void)encodeSystemFieldsWithCoder:(id)a0;
- (id)initWithRecordType:(id)a0 zoneID:(id)a1;
- (void)releasePackages;
- (void)setParentReferenceFromRecordID:(id)a0;
- (id)_allStrings;
- (id)_initSkippingValidationWithRecordType:(id)a0 recordID:(id)a1;
- (BOOL)canHostServerURLInfo;
- (BOOL)canSkipRecordSaveForMergeables;
- (void)claimPackagesWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (BOOL)containsAssetBackedMergeableDeltas;
- (BOOL)containsMergeableValuesWithDeltasToSave;
- (void)copyStreamingAssetServerFieldsFromServerRecord:(id)a0;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { } *)a0 userFields:(BOOL)a1;
- (void)countMergeableValueMetrics:(id /* block */)a0;
- (id)decryptFullToken:(id)a0;
- (id)initWithRecordTransport:(id)a0;
- (id)initWithRecordType:(id)a0;
- (BOOL)isMoreRecentThanRecord:(id)a0;
- (void)preTiboEncodeWithCoder:(id)a0;
- (BOOL)prepareMergeablesForUploadInContainer:(id)a0 useAssetsIfNecessary:(BOOL)a1 error:(id *)a2;
- (void)removePackages;
- (void)setParentReferenceFromRecord:(id)a0;
- (id)shortSharingToken;
- (void)updateMergeablesForSuccessfulSave;
- (void)updateWithSavedRecordXPCMetadata:(id)a0 shouldOnlySaveAssetContent:(BOOL)a1;

@end
