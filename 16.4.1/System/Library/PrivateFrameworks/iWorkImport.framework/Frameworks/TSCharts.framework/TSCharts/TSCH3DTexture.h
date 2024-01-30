@class TSCH3DResource, TSCH3DTextureResource;

@interface TSCH3DTexture : NSObject <NSCopying> {
    TSCH3DTextureResource *_textureResource;
}

@property (readonly, nonatomic) TSCH3DResource *resource;

- (id)resource;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)optimizedMipmapBuffer;
- (id)representativeColorBuffer;
- (void)resetResource;

@end
