@class NSString, NSMutableArray, GLKEffectPropertyTexGen;

@interface GLKEffectPropertyTexture : GLKEffectProperty

@property (readonly, nonatomic) GLKEffectPropertyTexGen *texGenS;
@property (readonly, nonatomic) GLKEffectPropertyTexGen *texGenT;
@property (readonly, nonatomic) GLKEffectPropertyTexGen *texGenR;
@property (readonly, nonatomic) NSMutableArray *texGenArray;
@property (nonatomic) int textureIndex;
@property (readonly, nonatomic) NSString *filePath;
@property (nonatomic) unsigned char matrixEnabled;
@property (nonatomic) int unit2dLoc;
@property (nonatomic) int unitCubeLoc;
@property (nonatomic) char *unit2dNameString;
@property (nonatomic) char *unitCubeNameString;
@property (readonly, nonatomic) unsigned char normalizedNormalsMask;
@property (readonly, nonatomic) unsigned char vPositionEyeMask;
@property (readonly, nonatomic) unsigned char vNormalEyeMask;
@property (readonly, nonatomic) unsigned char useTexCoordAttribMask;
@property (readonly, nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } allFshMasks;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) unsigned int name;
@property (nonatomic) unsigned int target;
@property (nonatomic) int envMode;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;
+ (void)clearAllTexturingMasks:(struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)a0 fshMask:(struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)a1;

- (void)bind;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)dirtyAllUniforms;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (void)initializeMasks;
- (void)setShaderBindings;

@end
