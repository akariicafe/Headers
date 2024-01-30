@class TSPData, TSCH3DTSPImageDataTexture;

@interface TSCH3DTSPImageData : NSObject <TSCHUnretainedParent> {
    TSCH3DTSPImageDataTexture *mParent;
}

@property (retain, nonatomic) TSPData *data;

+ (id)dataWithTSPImageData:(id)a0;

- (void)dealloc;
- (void)setParent:(id)a0;
- (struct CGImage { } *)newCGImage;
- (BOOL)hasCompleteData;
- (void)clearParent;
- (id)initWithTSPImageData:(id)a0;
- (id)p_encodeImageSize:(struct tvec4<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; union { int x0; int x1; int x2; } x3; } *)a0 andMipmapData:(id)a1;
- (id)uniqueFilename;
- (id)p_generateMipmapsBuffer;
- (id)p_decodeCachedData:(id)a0 imageSize:(struct tvec4<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; union { int x0; int x1; int x2; } x3; } *)a1;
- (BOOL)canLoadCachedDataForDataCache:(id)a0;
- (id)databufferForDataCache:(id)a0;

@end
