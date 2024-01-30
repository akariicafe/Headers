@class CKUploadRequestConfiguration, NSString, CKAccountOverrideInfo;

@interface CKContainerOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL wantsSiloedContext;
@property (nonatomic) BOOL returnPCSMetadata;
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) BOOL captureResponseHTTPHeaders;
@property (nonatomic) BOOL useZoneWidePCS;
@property (copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (copy, nonatomic) NSString *encryptionServiceName;
@property (nonatomic) BOOL bypassPCSEncryption;
@property (nonatomic) BOOL enforceNamedOperationGroups;
@property (nonatomic) BOOL forceEnableReadOnlyManatee;
@property (nonatomic) BOOL useClearAssetEncryption;
@property (nonatomic) BOOL accountInfoCacheIsDisabled;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUseMMCSEncryptionV2:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;

@end
