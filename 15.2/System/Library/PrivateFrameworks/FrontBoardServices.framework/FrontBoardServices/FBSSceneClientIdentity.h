@class NSString, FBProcess, RBSProcessIdentity, RBSProcessHandle;

@interface FBSSceneClientIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly, nonatomic) FBProcess *transientLocalProcess;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localIdentity;
+ (id)identityForBundleID:(id)a0;
+ (id)identityForProcessIdentity:(id)a0;
+ (id)identityForProcessHandle:(id)a0 transientLocalProcess:(id)a1;
+ (id)identityForProcessHandle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)fbs_sceneClientIdentity;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLocal:(BOOL)a0 identity:(id)a1 handle:(id)a2 description:(id)a3;
- (BOOL)isValid;

@end
