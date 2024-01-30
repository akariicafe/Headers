@interface GLKEffectPropertyTransform : GLKEffectProperty

@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mvpMatrix;
@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } invModelviewMatrix;
@property (nonatomic) int projectionMatrixLoc;
@property (nonatomic) int modelviewMatrixLoc;
@property (nonatomic) int mvpMatrixLoc;
@property (nonatomic) int normalMatrixLoc;
@property (nonatomic) int invModelviewMatrixLoc;
@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } modelviewMatrix;
@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } projectionMatrix;
@property (readonly, nonatomic) union _GLKMatrix3 { struct { float m00; float m01; float m02; float m10; float m11; float m12; float m20; float m21; float m22; } ; float m[9]; } normalMatrix;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)bind;
- (void)dirtyAllUniforms;
- (void)loadIdentity:(int)a0;
- (void)loadMatrix:(int)a0 matrix:(union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; })a1;
- (void)setShaderBindings;

@end
