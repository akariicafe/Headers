@class NSNumber, TSCH3DTexture, TSUOnce;

@interface TSCH3DTextureResource : TSCH3DResource <TSCH3DOptimizedTextureResource> {
    TSCH3DTexture *_parent;
    NSNumber *_cachedHash;
    TSUOnce *_cachedHashOnce;
}

- (id)initWithParent:(id)a0;
- (id)get;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)databufferForDataCache:(id)a0;
- (id)optimizedMipmapBuffer;
- (id)p_parent;
- (id)representativeColorBuffer;

@end
