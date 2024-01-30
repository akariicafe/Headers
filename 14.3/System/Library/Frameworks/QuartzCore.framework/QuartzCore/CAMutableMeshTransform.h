@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString *depthNormalization;
@property int subdivisionSteps;
@property BOOL replicatesEdges;

+ (id)meshTransform;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFace:(struct CAMeshFace { unsigned int x0[4]; float x1[4]; })a0;
- (void)addVertex:(struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; })a0;
- (void)removeFaceAtIndex:(unsigned long long)a0;
- (void)replaceVertexAtIndex:(unsigned long long)a0 withVertex:(struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; })a1;
- (void)removeVertexAtIndex:(unsigned long long)a0;
- (void)replaceFaceAtIndex:(unsigned long long)a0 withFace:(struct CAMeshFace { unsigned int x0[4]; float x1[4]; })a1;

@end
