@class NSString, FBSSceneSpecification, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding>

@property (nonatomic, getter=isKeyboardScene) BOOL keyboardScene;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) FBSSceneSpecification *specification;
@property (copy, nonatomic) FBSSceneClientSettings *initialClientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
