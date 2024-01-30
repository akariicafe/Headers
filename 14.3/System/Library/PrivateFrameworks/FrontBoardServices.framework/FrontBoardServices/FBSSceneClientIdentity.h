@class NSString, RBSProcessIdentity;

@interface FBSSceneClientIdentity : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityForBundleID:(id)a0;
+ (id)localIdentity;
+ (id)identityForProcessIdentity:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_init;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
