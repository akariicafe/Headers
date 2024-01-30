@class NSString, NSDictionary, CKUploadRequestConfiguration, CKAccountOverrideInfo;
@protocol CKTestDeviceReference;

@interface CKContainerOptions : NSObject <CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long qualityOfService;
@property BOOL returnPCSMetadata;
@property (retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain) NSString *personaIdentifier;
@property BOOL returnRequestOperationProto;
@property BOOL isServiceManatee;
@property (copy) NSDictionary *fakeEntitlements;
@property BOOL holdAllOperations;
@property (retain) id<CKTestDeviceReference> testDeviceReferenceProtocol;
@property BOOL captureResponseHTTPHeaders;
@property BOOL useZoneWidePCS;
@property (copy) CKAccountOverrideInfo *accountOverrideInfo;
@property (copy) CKAccountOverrideInfo *accountInfoOverride;
@property unsigned long long mmcsEncryptionSupport;
@property (copy) NSString *encryptionServiceName;
@property BOOL bypassPCSEncryption;
@property BOOL enforceNamedOperationGroups;
@property BOOL forceEnableReadOnlyManatee;
@property BOOL useClearAssetEncryption;
@property BOOL accountInfoCacheIsDisabled;
@property BOOL useAnonymousToServerShareParticipants;
@property BOOL encryptMergeableValueMetadata;
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy) NSString *applicationBundleIdentifierOverrideForTCC;
@property BOOL maintainRecordUploadOrder;
@property BOOL addDatabaseScopeToZoneIDs;
@property BOOL fetchChangesForMergeableValues;
@property BOOL prefersHiddenAllowedSharingOptionsUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setUseMMCSEncryptionV2:(BOOL)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
