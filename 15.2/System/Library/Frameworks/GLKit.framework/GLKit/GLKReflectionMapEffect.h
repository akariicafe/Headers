@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect>

@property (nonatomic) BOOL dirtyUniforms;
@property (nonatomic) int matrixLoc;
@property (readonly, nonatomic) GLKEffectPropertyTexture *textureCubeMap;
@property (nonatomic) union _GLKMatrix3 { struct { float m00; float m01; float m02; float m10; float m11; float m12; float m20; float m21; float m22; } ; float m[9]; } matrix;

- (id)description;
- (id)init;
- (void)prepareToDraw;
- (void)dealloc;

@end
