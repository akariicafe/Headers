@class SCNMTLResourceManager;
@protocol MTLBuffer;

@interface SCNMTLTessellator : NSObject {
    struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *_geometry;
    SCNMTLResourceManager *_resourceManager;
    struct { unsigned char type; float tessellationFactorScale; unsigned int tessellationPartitionMode; unsigned char tessellationSmoothingMode; union { struct { float edgeTessellationFactor; float insideTessellationFactor; } uniform; struct { float projectedEdgeLength; } screenSpaceAdaptive; struct { float maximumEdgeLength; } constrainedEdgeLength; struct { unsigned char tessellationLevel; unsigned char allowSingleCreasePatch : 1; unsigned char useScreenSpaceTessellation : 1; } subdivisionSurface; } parameters; } _cachedTessellator;
    id<MTLBuffer> _tessellationFactorBuffer;
    id<MTLBuffer> _lastFramePositionBuffer;
}

- (void)update:(struct { id x0; id x1; struct *x2; unsigned int x3; BOOL x4; })a0;
- (void)dealloc;
- (struct { unsigned char x0 : 2; unsigned char x1 : 2; unsigned char x2 : 2; unsigned char x3 : 1; })_pipelineStateHashForMeshElement:(id)a0 patchType:(unsigned char)a1;
- (void)constrainedEdgeLengthTessellationDrawMeshElement:(id)a0 forMesh:(id)a1 instanceCount:(unsigned long long)a2 renderContext:(id)a3;
- (void)draw:(struct { struct __C3DMesh *x0; id x1; struct __C3DMeshElement *x2; id x3; unsigned int x4; id x5; unsigned char x6; })a0;
- (id)initWithGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)a0 resourceManager:(id)a1;
- (id /* block */)newPipelineStateConfiguratorForMeshElement:(id)a0 patchType:(unsigned char)a1 device:(id)a2;
- (unsigned char)pipelineStateHashForMeshElement:(id)a0 patchType:(unsigned char)a1;
- (void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)a0 forMesh:(id)a1 instanceCount:(unsigned long long)a2 renderContext:(id)a3;
- (void)subdivisionSurfaceTessellationDraw:(struct { struct __C3DMesh *x0; id x1; struct __C3DMeshElement *x2; id x3; unsigned int x4; id x5; unsigned char x6; })a0;
- (void)uniformTessellationDrawMeshElement:(id)a0 forMesh:(id)a1 instanceCount:(unsigned long long)a2 renderContext:(id)a3;
- (void)updateConstrainedEdgeLengthTessellator:(struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; })a0 parameters:(struct { id x0; id x1; struct *x2; unsigned int x3; BOOL x4; })a1;
- (void)updateScreenSpaceAdaptiveTessellator:(struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; })a0 parameters:(struct { id x0; id x1; struct *x2; unsigned int x3; BOOL x4; })a1;
- (void)updateSubdivisionSurfaceTessellator:(struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; })a0 parameters:(struct { id x0; id x1; struct *x2; unsigned int x3; BOOL x4; })a1;
- (void)updateUniformTessellator:(struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; })a0;

@end
