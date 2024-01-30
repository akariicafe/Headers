@class NSString, NSSet;

@interface BRCClientPrivilegesDescriptor : NSObject {
    NSString *_debugIdentifier;
    char _cloudEnabledStatusWithoutLogOutStatus;
    BOOL _canGetApplicationInfo;
}

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL isNonAppSandboxed;
@property (readonly, nonatomic) BOOL isAllowedToAccessAnyCloudService;
@property (readonly, nonatomic) BOOL isProxyEntitled;
@property (readonly, nonatomic) BOOL isSharingProxyEntitled;
@property (readonly, nonatomic) BOOL isFolderSharingProxyEntitled;
@property (readonly, nonatomic) BOOL isSharingPrivateInterfaceEntitled;
@property (readonly, nonatomic) BOOL isAutomationEntitled;
@property (readonly, nonatomic) BOOL canFetchUserQuota;
@property (readonly, nonatomic) NSSet *appLibraryIDs;
@property (readonly, nonatomic) NSString *defaultAppLibraryID;
@property (readonly, nonatomic) BOOL hasAuditToken;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;

+ (BOOL)_isNonSandboxedForAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (int)pid;
- (id)description;
- (void).cxx_destruct;
- (char)_computeCloudEnabledStatusWithoutLogOutStatus;
- (void)_finishSetupWithClientContainerIDs:(id)a0;
- (char)cloudEnabledStatusForSession:(id)a0;
- (char)cloudEnabledStatusWithHasSession:(BOOL)a0;
- (BOOL)hasPid;
- (id)initWithNonSandboxedAppWithAppLibraryIDs:(id)a0 bundleID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;
- (void)updateCloudEnabledStatus;

@end
