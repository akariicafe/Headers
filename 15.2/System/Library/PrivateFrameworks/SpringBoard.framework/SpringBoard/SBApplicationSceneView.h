@class SBApplicationSceneHandle, SBApplication;

@interface SBApplicationSceneView : SBSceneView

@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBApplication *application;

- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2 hostRequester:(id)a3;
- (id)deviceApplicationSceneView;

@end
