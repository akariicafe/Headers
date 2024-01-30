@class TSPData, TSCH3DTSPImageDataTexture;

@interface TSCH3DTSPImageData : NSObject {
    TSCH3DTSPImageDataTexture *_parent;
}

@property (retain, nonatomic) TSPData *data;

+ (id)dataWithTSPImageData:(id)a0;

- (void)setParent:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasCompleteData;
- (struct CGImage { } *)newCGImage;
- (id)initWithTSPImageData:(id)a0;
- (id)p_encodeImageSize:(void *)a0 andMipmapData:(id)a1;
- (id)uniqueFilename;
- (id)p_generateMipmapsBuffer;
- (id)p_decodeCachedData:(id)a0 imageSize:(void *)a1;
- (BOOL)canLoadCachedDataForDataCache:(id)a0;
- (id)databufferForDataCache:(id)a0;

@end
