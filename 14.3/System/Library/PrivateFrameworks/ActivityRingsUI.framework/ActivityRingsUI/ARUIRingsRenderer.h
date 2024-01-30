@class ARUIRingUniformsCache;
@protocol MTLBuffer;

@interface ARUIRingsRenderer : NSObject {
    id<MTLBuffer> _vertexPositionsBuffer;
    id<MTLBuffer> _indexBuffer;
    unsigned long long _indexCount;
    ARUIRingUniformsCache *_cache;
}

- (void)clearCaches;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)beginRenderingWithCommandEncoder:(id)a0;
- (void)renderRings:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2 forState:(id)a3;
- (void)_renderEntireRings:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2 forState:(id)a3;
- (void)_renderRingsFollowingPercent:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2 forState:(id)a3;

@end
