@class CKContainerID, NSDictionary, NSString, CKAccountOverrideInfo, CKFrameworkFingerprint;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) BOOL captureResponseHTTPHeaders;
@property (nonatomic) BOOL wantsSiloedContext;
@property (nonatomic) BOOL useZoneWidePCS;
@property (retain, nonatomic) NSDictionary *fakeEntitlements;
@property (nonatomic) BOOL holdAllOperations;
@property (nonatomic) BOOL returnPCSMetadata;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSString *containerEncryptionServiceName;
@property (nonatomic) BOOL bypassPCSEncryption;
@property (nonatomic) BOOL forceEnableReadOnlyManatee;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic) BOOL masqueradeAsThirdPartyApp;
@property (retain, nonatomic) CKFrameworkFingerprint *frameworkFingerprint;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) BOOL useClearAssetEncryption;
@property (nonatomic) BOOL connectToTestingDaemon;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hashString;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
