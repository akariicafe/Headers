@class NSString;

@interface FBSSceneIdentity : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workspaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identity;
+ (id)identityForIdentifier:(id)a0;
+ (id)identityForIdentifier:(id)a0 workspaceIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
