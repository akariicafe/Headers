@interface TSCH3DSceneRenderSetup : NSObject

+ (id)null;
+ (id)full;
+ (id)camera;
+ (id)identity;
+ (id)viewport;
+ (id)sceneTransform;
+ (id)cameraAndSceneTransform;

- (id)renderingCameraFromOriginalCamera:(id)a0 pipeline:(id)a1;

@end
