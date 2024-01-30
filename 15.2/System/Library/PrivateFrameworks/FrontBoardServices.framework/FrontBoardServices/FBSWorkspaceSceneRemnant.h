@class NSString, FBSSceneParameters;

@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *group;
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_initWithIdentifier:(id)a0 group:(id)a1 parameters:(id)a2;

@end
