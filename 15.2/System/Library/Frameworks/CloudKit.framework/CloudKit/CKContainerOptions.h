@class NSString, NSDictionary, CKUploadRequestConfiguration, CKTestDeviceReference, CKAccountOverrideInfo;

@interface CKContainerOptions : NSObject <CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL returnPCSMetadata;
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) BOOL returnRequestOperationProto;
@property (retain, nonatomic) NSDictionary *fakeEntitlements;
@property (nonatomic) BOOL holdAllOperations;
@property (retain, nonatomic) CKTestDeviceReference *testDeviceReference;
@property (nonatomic) BOOL captureResponseHTTPHeaders;
@property (nonatomic) BOOL useZoneWidePCS;
@property (copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (copy, nonatomic) NSString *encryptionServiceName;
@property (nonatomic) BOOL bypassPCSEncryption;
@property (nonatomic) BOOL enforceNamedOperationGroups;
@property (nonatomic) BOOL forceEnableReadOnlyManatee;
@property (nonatomic) BOOL useClearAssetEncryption;
@property (nonatomic) BOOL accountInfoCacheIsDisabled;
@property (nonatomic) BOOL useAnonymousToServerShareParticipants;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setUseMMCSEncryptionV2:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
