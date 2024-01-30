@interface ARQLDevice : NSObject

+ (BOOL)supportsSceneReconstruction;
+ (BOOL)isRenderTier1;
+ (BOOL)isRenderTier2;
+ (BOOL)isRenderTier3;
+ (BOOL)isRenderTier4;
+ (BOOL)isRenderTier5;
+ (BOOL)useSceneReconstructionMeshForOrientation;

@end
