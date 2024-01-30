@class NSString;

@interface CAMeshTransform : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    void *_impl;
    unsigned long long _normalization;
    long long _subdivisionSteps;
    BOOL _replicatesEdges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long vertexCount;
@property (readonly) unsigned long long faceCount;
@property (readonly, copy) NSString *depthNormalization;
@property (readonly) int subdivisionSteps;
@property (readonly) BOOL replicatesEdges;

+ (id)meshTransformWithVertexCount:(unsigned long long)a0 vertices:(const struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; } *)a1 faceCount:(unsigned long long)a2 faces:(const struct CAMeshFace { unsigned int x0[4]; float x1[4]; } *)a3 depthNormalization:(id)a4;
+ (void)CAMLParserEndElement:(id)a0 content:(id)a1;
+ (void)CAMLParserStartElement:(id)a0;

- (id)_data;
- (void)encodeWithCAMLWriter:(id)a0;
- (double)CA_distanceToValue:(id)a0;
- (struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; })vertexAtIndex:(unsigned long long)a0;
- (struct CAMeshFace { unsigned int x0[4]; float x1[4]; })faceAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)meshTransformForLayer:(id)a0;
- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (id)_subdivideToDepth:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_constructWithData:(id)a0;
- (id)subdividedMesh:(int)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CA_interpolateValues:(id)a0 :(id)a1 :(id)a2 interpolator:(const struct ValueInterpolator { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; BOOL x14; } *)a3;
- (id)_initWithMeshTransform:(id)a0;
- (id)initWithVertexCount:(unsigned long long)a0 vertices:(const struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; } *)a1 faceCount:(unsigned long long)a2 faces:(const struct CAMeshFace { unsigned int x0[4]; float x1[4]; } *)a3 depthNormalization:(id)a4;
- (void)dealloc;
- (id)inverseMesh;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2; } *)CA_copyRenderValue;

@end
