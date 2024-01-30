@class NSString, NSUUID, RBSProcessIdentity;

@interface RBLaunchdProperties : NSObject {
    long long _type;
    NSString *_path;
    BOOL _explicitAngelFlag;
}

@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, nonatomic, getter=isAngel) BOOL angel;
@property (readonly, nonatomic, getter=isMultiInstance) BOOL multiInstance;
@property (readonly, nonatomic, getter=isSystemShell) BOOL systemShell;
@property (readonly, nonatomic, getter=hasVariableEUID) BOOL variableEUID;
@property (readonly, nonatomic) BOOL doesOverrideManagement;
@property (readonly, nonatomic) unsigned char overrideManageFlags;
@property (readonly, nonatomic) BOOL disableFreezing;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *jobLabel;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) int hostPid;
@property (readonly, nonatomic) int requestedJetsamPriority;
@property (readonly, nonatomic) NSString *underlyingAssertion;
@property (readonly, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *homeDirectory;
@property (readonly, copy, nonatomic) NSString *tmpDirectory;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) RBSProcessIdentity *specifiedIdentity;

+ (id)processIdentityForEndpoint:(id)a0;
+ (id)_instanceWithProperties:(id)a0 xpcProps:(id)a1;
+ (id)propertiesForJob:(id)a0;
+ (id)propertiesForPid:(int)a0;

- (id)resolvedIdentityWithPid:(int)a0 auid:(unsigned int)a1;
- (id)_initXPCServiceWithProperties:(id)a0 HostPid:(int)a1;
- (void).cxx_destruct;
- (id)_initAppWithProperties:(id)a0;
- (id)resolvedIdentity;
- (void)_parseAdditionalProperties:(id)a0;
- (BOOL)_parseDaemonPlist:(id)a0;
- (void)_parseLASSProperties:(id)a0;
- (id)_initDaemonOrAngelWithProperties:(id)a0 path:(id)a1;

@end
