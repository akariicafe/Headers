@class TSCH3DResource, TSCH3DTextureResource;

@interface TSCH3DTexture : NSObject <NSCopying> {
    TSCH3DTextureResource *_textureResource;
}

@property (readonly, nonatomic) TSCH3DResource *resource;

- (id)resource;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)representativeColorBuffer;
- (id)optimizedMipmapBuffer;
- (void)resetResource;

@end
