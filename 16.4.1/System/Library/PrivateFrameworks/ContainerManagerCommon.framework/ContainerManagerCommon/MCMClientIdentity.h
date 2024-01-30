@class MCMUserIdentity, MCMPOSIXUser, NSURL;
@protocol MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMAllows, NSCopying>

@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realAuditToken;
@property (readonly, nonatomic) struct { unsigned int val[8]; } effectiveAuditToken;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;
@property (readonly, nonatomic) BOOL cached;

+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;

- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifier:(id)a1;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToChangeReferences;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)createLibsystemClient;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (BOOL)isAllowedToTest;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 effectiveAuditToken:(struct { unsigned int x0[8]; })a4 realAuditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 sandboxed:(BOOL)a7 sandboxContainerURL:(id)a8 kernel:(BOOL)a9;
- (id)initInternal;
- (char *)issueSandboxExtensionWithMetadata:(id)a0 forceIssue:(BOOL)a1 error:(unsigned long long *)a2;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToStartDataMigration;
- (id)clientIdentityByChangingCached:(BOOL)a0;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (id)init;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToDelete;
- (id)description;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (BOOL)needsSandboxExtensionForContainerWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToStageSharedContent;
- (void).cxx_destruct;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;

@end
