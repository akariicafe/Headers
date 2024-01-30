@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalPaintRenderCacheBuffer : NSObject {
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
}

@property (readonly, nonatomic) id<MTLBuffer> uniformsBuffer;
@property (readonly, nonatomic) unsigned long long uniformsBufferOffset;
@property (readonly, nonatomic) id<MTLBuffer> strokePointBuffer;
@property (readonly, nonatomic) unsigned long long strokePointBufferOffset;
@property (readonly, nonatomic) unsigned long long numVertices;
@property (readonly, nonatomic) unsigned long long numPoints;

- (id)init;
- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (id)uniformsBuffer;
- (id)strokePointBuffer;
- (id)initWithUniforms:(const struct PKMetalPaintKernelUniforms { unsigned int x0; unsigned int x1; unsigned int x2; float x3; float x4; } *)a0 points:(const struct PKMetalPaintStrokePoint { float x0; unsigned short x1 : 16; unsigned short x2 : 16; } *)a1 numPoints:(unsigned long long)a2 numVertices:(unsigned long long)a3 resourceHandler:(id)a4;

@end
