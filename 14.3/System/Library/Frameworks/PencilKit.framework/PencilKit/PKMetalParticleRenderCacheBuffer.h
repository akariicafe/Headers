@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalParticleRenderCacheBuffer : NSObject {
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
}

@property (readonly, nonatomic) id<MTLBuffer> uniformsBuffer;
@property (readonly, nonatomic) unsigned long long uniformsBufferOffset;
@property (readonly, nonatomic) id<MTLBuffer> strokePointBuffer;
@property (readonly, nonatomic) unsigned long long strokePointBufferOffset;
@property (readonly, nonatomic) unsigned long long numVertices;
@property (readonly, nonatomic) unsigned long long numParticles;
@property (readonly, nonatomic) unsigned long long numPoints;

- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (id)initWithUniforms:(const struct PKMetalParticleKernelUniforms { float x0; float x1; float x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0 points:(const struct PKMetalParticleStrokePoint { unsigned int x0; float x1; float x2; struct half { unsigned short x0; } x3; struct half { unsigned short x0; } x4; struct half { unsigned short x0; } x5; struct half { unsigned short x0; } x6; unsigned short x7; unsigned short x8; } *)a1 numPoints:(unsigned long long)a2 resourceHandler:(id)a3;
- (id)uniformsBuffer;
- (id)strokePointBuffer;

@end
