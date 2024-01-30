@class SBApplicationSceneHandle, SBApplication;

@interface SBApplicationSceneView : SBSceneView

@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBApplication *application;

- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 contentOrientation:(long long)a2 containerOrientation:(long long)a3 hostRequester:(id)a4;
- (id)deviceApplicationSceneView;

@end
