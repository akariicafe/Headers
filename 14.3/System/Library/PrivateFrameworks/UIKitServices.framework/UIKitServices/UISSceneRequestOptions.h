@class NSString, NSSet;

@interface UISSceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding>

@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSSet *actions;
@property (nonatomic) BOOL requestFullscreen;
@property (nonatomic) BOOL requestBackground;
@property (nonatomic) BOOL preserveLayout;
@property (nonatomic) long long sceneRequestIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
