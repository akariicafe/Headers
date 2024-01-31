@class NSString, NSDictionary, CKUploadRequestConfiguration, CKAccountOverrideInfo;
@protocol CKTestDeviceReferenceProtocol;

@interface CKContainerOptions : NSObject <CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long qualityOfService;
@property BOOL returnPCSMetadata;
@property (retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (copy) NSString *personaIdentifier;
@property BOOL returnRequestOperationProto;
@property BOOL isServiceManatee;
@property (copy) NSDictionary *fakeEntitlements;
@property BOOL holdAllOperations;
@property (retain) id<CKTestDeviceReferenceProtocol> testDeviceReferenceProtocol;
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

- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)sqliteRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)setUseMMCSEncryptionV2:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
