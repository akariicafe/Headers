@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject

@property (retain, nonatomic) FBSScene *FBSScene;
@property (nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate;
@property (retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext;

- (void).cxx_destruct;

@end
