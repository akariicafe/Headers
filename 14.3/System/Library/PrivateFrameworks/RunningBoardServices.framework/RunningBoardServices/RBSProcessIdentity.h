@class RBSProcessIdentifier, NSString, NSUUID;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying> {
    int _pid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char defaultManageFlags;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly, nonatomic) BOOL inheritsCoalitionBand;
@property (readonly, nonatomic, getter=isAnonymous) BOOL anonymous;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic, getter=isEmbeddedApplication) BOOL embeddedApplication;
@property (readonly, copy, nonatomic) NSString *embeddedApplicationIdentifier;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
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

+ (BOOL)supportsRBSXPCSecureCoding;
+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;
+ (id)identityForXPCServiceIdentifier:(id)a0;
+ (id)identityForApplicationJobLabel:(id)a0 bundleID:(id)a1 platform:(int)a2;
+ (id)extensionIdentityForPlugInKitIdentifier:(id)a0 hostIdentifier:(id)a1 UUID:(id)a2;
+ (id)identityForLaunchProperties:(id)a0 pid:(int)a1 euid:(unsigned int)a2;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0 jobLabel:(id)a1 euid:(unsigned int)a2 platform:(int)a3;
+ (id)identityForXPCServiceProperties:(id)a0 pid:(int)a1 euid:(unsigned int)a2 host:(id)a3;
+ (id)_identityForXPCServiceIdentifier:(id)a0 hostInstance:(id)a1 UUID:(id)a2 variant:(long long)a3;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0 euid:(unsigned int)a1;
+ (id)identityForPlugInKitIdentifier:(id)a0;
+ (id)identityForEmbeddedApplicationIdentifier:(id)a0;
+ (id)_identityForXPCServicePath:(id)a0 type:(unsigned long long)a1 pid:(int)a2 euid:(unsigned int)a3 host:(id)a4 UUID:(id)a5;
+ (id)identityForDaemonJobLabel:(id)a0;
+ (id)identityForXPCServicePath:(id)a0 host:(id)a1;
+ (id)identityForExecutablePath:(id)a0 pid:(int)a1 euid:(unsigned int)a2;
+ (id)identityOfCurrentProcess;
+ (id)_identityForXPCServicePath:(id)a0 properties:(id)a1 pid:(int)a2 euid:(unsigned int)a3 host:(id)a4;
+ (id)_identityForXPCServiceIdentifier:(id)a0 variant:(long long)a1;
+ (id)identityForApplicationJobLabel:(id)a0;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqualToIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)encodeForJob;
- (id)copyWithEuid:(unsigned int)a0;
- (id)_initOpaqueWithPid:(int)a0 name:(id)a1 euid:(unsigned int)a2;
- (id)initWithDecodeFromJob:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
