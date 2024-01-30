@class RBSProcessIdentifier, NSString, NSData, NSUUID;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying> {
    int _pid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char defaultManageFlags;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly, nonatomic) BOOL inheritsCoalitionBand;
@property (readonly, nonatomic, getter=isDext) BOOL dext;
@property (readonly, nonatomic, getter=isAnonymous) BOOL anonymous;
@property (readonly, nonatomic) NSString *personaString;
@property (readonly, nonatomic) NSString *dextServerName;
@property (readonly, nonatomic) NSString *dextLabel;
@property (readonly, nonatomic) NSString *dextContainingAppBundleID;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) unsigned int auid;
@property (readonly, nonatomic) int platform;
@property (readonly, copy, nonatomic) NSString *consistentLaunchdJobLabel;
@property (nonatomic) unsigned char osServiceType;
@property (readonly, nonatomic) BOOL supportsLaunchingDirectly;
@property (readonly, nonatomic, getter=isEmbeddedApplication) BOOL embeddedApplication;
@property (readonly, copy, nonatomic) NSString *embeddedApplicationIdentifier;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
@property (readonly, nonatomic, getter=isAngel) BOOL angel;
@property (readonly, copy, nonatomic) NSString *angelJobLabel;
@property (readonly, nonatomic, getter=hasConsistentLaunchdJob) BOOL consistentLaunchdJob;
@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, copy, nonatomic) NSString *xpcServiceIdentifier;
@property (readonly, copy, nonatomic) RBSProcessIdentity *hostIdentity;
@property (readonly, copy, nonatomic) RBSProcessIdentifier *hostIdentifier;
@property (readonly, copy, nonatomic) NSString *persona;
@property (readonly, copy, nonatomic) NSData *validationToken;
@property (readonly, nonatomic, getter=isApplication) BOOL application;
@property (readonly, copy, nonatomic) NSString *applicationJobLabel;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityForApplicationJobLabel:(id)a0 bundleID:(id)a1 platform:(int)a2;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0 auid:(unsigned int)a1;
+ (id)identityOfCurrentProcess;
+ (id)identityForMacApplicationJobLabel:(id)a0 appID:(id)a1 platform:(int)a2;
+ (id)identityForMacApplicationJobLabel:(id)a0 wrappedInfoProvider:(id)a1 platform:(int)a2;
+ (id)extensionIdentityForPlugInKitIdentifier:(id)a0 hostIdentifier:(id)a1 UUID:(id)a2;
+ (id)identityForXPCServiceIdentifier:(id)a0 hostInstance:(id)a1 UUID:(id)a2 persona:(id)a3 validationToken:(id)a4 variant:(long long)a5;
+ (id)identityForExecutablePath:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
+ (id)identityForApplicationJobLabel:(id)a0;
+ (id)identityForMacApplicationJobLabel:(id)a0 appID:(id)a1 bundleID:(id)a2 platform:(int)a3;
+ (id)identityForWrappedInfoProviderIdentity:(id)a0;
+ (id)identityForUnknownServiceWithJobLabel:(id)a0;
+ (id)identityForPlugInKitIdentifier:(id)a0;
+ (id)identityForLSApplicationIdentity:(id)a0;
+ (id)identityForXPCServiceExecutablePath:(id)a0 pid:(int)a1 auid:(unsigned int)a2 host:(id)a3 UUID:(id)a4;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0;
+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)identityForXPCServiceIdentifier:(id)a0 hostInstance:(id)a1 UUID:(id)a2 variant:(long long)a3;
+ (id)identityForLSApplicationIdentity:(id)a0 LSApplicationRecord:(id)a1;
+ (id)extensionIdentityForBundleIdentifier:(id)a0 persona:(id)a1 instanceUUID:(id)a2 hostIdentifier:(id)a3 validationToken:(id)a4;
+ (id)identityForXPCServiceExecutablePath:(id)a0 host:(id)a1;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)identityForDextWithServerName:(id)a0 tagString:(id)a1 containingAppBundleID:(id)a2;
+ (id)identityForDaemonJobLabel:(id)a0;
+ (id)_identityForXPCServiceIdentifier:(id)a0 variant:(long long)a1;
+ (id)identityForXPCServiceIdentifier:(id)a0;
+ (id)identityForLaunchdJobLabel:(id)a0 isMultiInstance:(BOOL)a1 pid:(int)a2 auid:(unsigned int)a3;
+ (id)identityForAngelJobLabel:(id)a0;
+ (id)extensionIdentityForPlugInKitIdentifier:(id)a0 bundledURL:(id)a1 hostIdentifier:(id)a2 UUID:(id)a3;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0 jobLabel:(id)a1 auid:(unsigned int)a2 platform:(int)a3;

- (BOOL)isEqualToIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDecodeFromJob:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)processPredicate;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)matchesProcess:(id)a0;
- (id)_init;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)encodeForJob;
- (id)init;
- (void).cxx_destruct;

@end
