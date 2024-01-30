@class TSCH3DResource, TSCH3DTextureResource;

@interface TSCH3DTexture : NSObject <NSCopying> {
    TSCH3DTextureResource *mTextureResource;
}

@property (readonly, nonatomic) TSCH3DResource *resource;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)resource;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)representativeColorBuffer;
- (id)optimizedMipmapBuffer;
- (void)resetResource;

@end
