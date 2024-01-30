@class ARUIRingUniformsCache;

@interface ARUIRingsRenderer : NSObject {
    unsigned long long _indexCount;
    ARUIRingUniformsCache *_cache;
}

- (id)initWithDevice:(id)a0;
- (void)clearCaches;
- (void).cxx_destruct;
- (void)_renderEntireRings:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2 forState:(id)a3;
- (void)_renderRingsFollowingPercent:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2 forState:(id)a3;
- (void)beginRenderingWithCommandEncoder:(id)a0;
- (void)renderRings:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2 forState:(id)a3;

@end
