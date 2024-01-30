@class SCNMTLResourceManager, NSArray, SCNMTLComputePipeline;
@protocol MTLBuffer;

@interface SCNMTLMorph : NSObject {
    SCNMTLResourceManager *_resourceManager;
    struct { char *memory; id<MTLBuffer> buffer; unsigned long long offset; } _baseBuffer;
    unsigned int _baseVertexCount;
    short _baseBufferTypes[3];
    unsigned int _baseBufferTypesCount;
    unsigned int _baseBufferStride;
    short _targetBufferTypes[3];
    unsigned int _targetBufferTypesCount;
    unsigned int _targetBufferStride;
    unsigned int _dstSemanticUsageMask;
    unsigned int _srcSemanticUsageMask;
    void *_bufferPool;
    BOOL _unifyPostMorphNormals;
    BOOL _shouldMorphNormals;
    unsigned int _lastMorpherIncrementalPassState;
    unsigned char _dataKindForMorphing;
    id<MTLBuffer> _splatProvokingVertices;
    struct { id<MTLBuffer> perVertexTrianglesOffsets; id<MTLBuffer> perVertexTrianglesIndices; BOOL sharedTriangleIs16Bits; } _postUnifyInfo;
    struct Target { struct { char *x0; id x1; unsigned long long x2; } x0; unsigned int x1; float x2; struct __C3DMeshSource *x3[3]; struct { char *x0; id x1; unsigned long long x2; } x4; } *_targets;
    unsigned long long _targetCount;
    NSArray *_originalTargets;
    SCNMTLComputePipeline *_copyCPS;
    SCNMTLComputePipeline *_blendCPS;
    SCNMTLComputePipeline *_blendSparseCPS;
    SCNMTLComputePipeline *_splatCPS;
}

- (void)dealloc;
- (struct { char *x0; id x1; unsigned long long x2; })newBufferWithLength:(unsigned long long)a0;
- (unsigned int)sparseIndexSize;
- (void)_createPipelineStates:(id)a0;
- (void)_prepareTargetDataForIndex:(long long)a0 morph:(struct __C3DMorph { } *)a1 baseMesh:(struct __C3DMesh { } *)a2;
- (void)_writeSources:(const struct __C3DMeshSource **)a0 dstTypes:(short *)a1 sourcesCount:(unsigned int)a2 inBuffer:(void *)a3 stride:(unsigned int)a4 length:(unsigned long long)a5 sparse:(BOOL)a6 positionScale:(float)a7;
- (id)initWithMorph:(struct __C3DMorph { } *)a0 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)a1 resourceManager:(id)a2;
- (BOOL)isCompatibleWithMorph:(struct __C3DMorph { } *)a0;
- (void)morphIncrementallyForMorpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DGeometry *x1; struct __C3DMorph *x2; struct __C3DMesh *x3; unsigned int x4; unsigned int x5; float *x6; unsigned int x7; unsigned int x8; } *)a0 renderContext:(id)a1 positionBuffer:(id)a2 normalBuffer:(id)a3;
- (void)morphSparseMorpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DGeometry *x1; struct __C3DMorph *x2; struct __C3DMesh *x3; unsigned int x4; unsigned int x5; float *x6; unsigned int x7; unsigned int x8; } *)a0 renderContext:(id)a1 positionBuffer:(id)a2 normalBuffer:(id)a3;
- (void)setNextMorphRequiresReset;
- (void)unifyMeshWithRenderContext:(id)a0 positionBuffer:(id)a1 normalBuffer:(id)a2;

@end
