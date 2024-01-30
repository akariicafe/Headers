@class NSString;

@interface BLSBacklightFBSSceneEnvironmentDiffActionNullDelegate : NSObject <BLSBacklightFBSSceneEnvironmentDiffActionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChangesWithTransitionContext:(id)a0 environmentDelta:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; })a1 performActionsBlock:(id /* block */)a2;

@end
