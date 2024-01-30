@class RBSProcessIdentifier, NSString, NSUUID;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying> {
    int _pid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char defaultManageFlags;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly, nonatomic) BOOL inheritsCoalitionBand;
@property (readonly, nonatomic, getter=isAnonymous) BOOL anonymous;
@property (readonly, nonatomic) NSString *personaString;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) unsigned int auid;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic, getter=isEmbeddedApplication) BOOL embeddedApplication;
@property (readonly, copy, nonatomic) NSString *embeddedApplicationIdentifier;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
@property (readonly, nonatomic, getter=isAngel) BOOL angel;
@property (readonly, copy, nonatomic) NSString *angelJobLabel;
@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, copy, nonatomic) NSString *xpcServiceIdentifier;
@property (readonly, copy, nonatomic) RBSProcessIdentity *hostIdentity;
@property (readonly, copy, nonatomic) RBSProcessIdentifier *hostIdentifier;
@property (readonly, nonatomic, getter=isApplication) BOOL application;
@property (readonly, copy, nonatomic) NSString *applicationJobLabel;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionIdentityForPlugInKitIdentifier:(id)a0 hostIdentifier:(id)a1 UUID:(id)a2;
+ (id)identityOfCurrentProcess;
+ (id)identityForApplicationJobLabel:(id)a0 bundleID:(id)a1 platform:(int)a2;
+ (id)identityForXPCServiceExecutablePath:(id)a0 host:(id)a1;
+ (id)identityForDaemonJobLabel:(id)a0;
+ (id)identityForWrappedInfoProviderIdentity:(id)a0;
+ (id)identityForApplicationJobLabel:(id)a0;
+ (id)identityForXPCServiceExecutablePath:(id)a0 pid:(int)a1 auid:(unsigned int)a2 host:(id)a3 UUID:(id)a4;
+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0 auid:(unsigned int)a1;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0 jobLabel:(id)a1 auid:(unsigned int)a2 platform:(int)a3;
+ (id)identityForLaunchdJobLabel:(id)a0 isMultiInstance:(BOOL)a1 pid:(int)a2 auid:(unsigned int)a3;
+ (id)identityForLSApplicationIdentity:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)identityForPlugInKitIdentifier:(id)a0;
+ (id)_identityForXPCServiceIdentifier:(id)a0 variant:(long long)a1;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0;
+ (id)identityForMacApplicationJobLabel:(id)a0 appID:(id)a1 platform:(int)a2;
+ (id)identityForMacApplicationJobLabel:(id)a0 wrappedInfoProvider:(id)a1 platform:(int)a2;
+ (id)identityForXPCServiceIdentifier:(id)a0;
+ (id)identityForAngelJobLabel:(id)a0;
+ (id)identityForExecutablePath:(id)a0 pid:(int)a1 auid:(unsigned int)a2;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)initWithDecodeFromJob:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeForJob;
- (BOOL)isEqualToIdentity:(id)a0;

@end
