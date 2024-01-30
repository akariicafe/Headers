@class NSString;

@interface FBSMutableSceneIdentity : FBSSceneIdentity

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workspaceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
