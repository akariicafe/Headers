@class NSNumber, TSCH3DTexture, TSUOnce;

@interface TSCH3DTextureResource : TSCH3DResource <TSCHUnretainedParent, TSCH3DOptimizedTextureResource> {
    TSCH3DTexture *mParent;
    NSNumber *mCachedHash;
    TSUOnce *mCachedHashOnce;
}

- (id)get;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithParent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearParent;
- (id)databufferForDataCache:(id)a0;
- (id)p_parent;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)representativeColorBuffer;
- (id)optimizedMipmapBuffer;

@end
