@class SCNNode, NSArray, SCNGeometry, SCNGeometrySource;

@interface SCNSkinner : NSObject <NSSecureCoding> {
    struct __C3DSkinner { } *_skinner;
    SCNGeometry *_baseGeometry;
    BOOL _bonesAndIndicesCompression;
    SCNNode *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) SCNNode *skeleton;
@property (retain, nonatomic) SCNGeometry *baseGeometry;
@property (nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } baseGeometryBindTransform;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray *bones;
@property (readonly, nonatomic) SCNGeometrySource *boneWeights;
@property (readonly, nonatomic) SCNGeometrySource *boneIndices;

+ (id)skinnerWithBaseGeometry:(id)a0 bones:(id)a1 boneInverseBindTransforms:(id)a2 boneWeights:(id)a3 boneIndices:(id)a4;
+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner { } *)a0;
+ (struct __C3DSkinner { } *)_createSkinnerWithVertexCount:(long long)a0 bones:(id)a1 boneWeights:(id)a2 boneIndices:(id)a3 baseGeometry:(id)a4;
+ (struct __C3DSkinner { } *)createSkinnerWithBaseGeometry:(id)a0 bones:(id)a1 boneWeights:(id)a2 boneIndices:(id)a3;
+ (struct __C3DSkinner { } *)_createSkinnerWithCompressedData:(id)a0 bonesCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
+ (id)_skinnerWithBaseGeometry:(id)a0 skinnableGeometry:(id)a1 bones:(id)a2 boneInverseBindTransforms:(id)a3 bindMatrix:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a4;

- (void)encodeWithCoder:(id)a0;
- (id)joints;
- (id)scene;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (const void *)__CFObject;
- (struct __C3DScene { } *)sceneRef;
- (void)_syncObjCModel;
- (void)_setBaseGeometry:(id)a0;
- (struct __C3DSkinner { } *)skinnerRef;
- (void)setBones:(id)a0;
- (id)initWithSkinnerRef:(struct __C3DSkinner { } *)a0;
- (BOOL)_setSkeleton:(id)a0;
- (void)set_bonesAndIndicesCompression:(BOOL)a0;
- (void)setBoneInverseBindTransforms:(id)a0;
- (BOOL)wantsCPUSkinning;
- (void)setWantsCPUSkinning:(BOOL)a0;
- (BOOL)_bonesAndIndicesCompression;

@end
