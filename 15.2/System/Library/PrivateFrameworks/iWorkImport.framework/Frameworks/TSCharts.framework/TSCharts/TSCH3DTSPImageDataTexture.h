@class TSDColorFill, TSCH3DTSPImageData, TSCH3DTSPMipmapData, NSString, TSPData, NSNumber, TSUOnce;

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {
    TSCH3DTSPMipmapData *_optimizedMipmapData;
    NSNumber *_cachedHash;
    TSDColorFill *_colorFill;
    NSString *_textureSetId;
    NSString *_imageName;
    TSUOnce *_cachedHashOnce;
}

@property (readonly, nonatomic) TSCH3DTSPImageData *data;
@property (readonly, nonatomic) TSPData *imageData;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)textureWithImageData:(id)a0 colorFill:(id)a1 optimizedMipmapData:(id)a2 textureSetId:(id)a3 imageName:(id)a4;
+ (id)textureWithImageData:(id)a0 colorFill:(id)a1 textureSetId:(id)a2 imageName:(id)a3;
+ (id)textureWithImageData:(id)a0 optimizedMipmapData:(id)a1 textureSetId:(id)a2 imageName:(id)a3;

- (void)setChanged:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)databufferForDataCache:(id)a0;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)representativeColorBuffer;
- (id)optimizedMipmapBuffer;
- (id)initWithImageData:(id)a0 colorFill:(id)a1 optimizedMipmapData:(id)a2 textureSetId:(id)a3 imageName:(id)a4;
- (void)p_setOptimizedMipMapData:(id)a0;

@end
