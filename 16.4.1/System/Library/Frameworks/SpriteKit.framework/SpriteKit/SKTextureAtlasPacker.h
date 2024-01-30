@interface SKTextureAtlasPacker : NSObject

+ (struct CGImage { } *)copyProcessedImageSource:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcNonAlphaArea:(struct CGImage { } *)a0;
- (struct CGImage { } *)copyRotateCGImage:(struct CGImage { } *)a0 direction:(BOOL)a1;
- (id)generateMetaData;
- (void)generateTextureAtlasImages:(id)a0 outputDictionary:(id *)a1 forcePOT:(BOOL)a2;
- (id)getTextureFileList:(id)a0 modDate:(id *)a1;
- (BOOL)isFullyOpaque:(struct CGImage { } *)a0;
- (id)partitionTextureFilesByResolution:(id)a0;
- (id)processPackedTextureAtlas:(const void *)a0 suffix:(id)a1 packer:(struct shared_ptr<MaxRectTexturePacker> { struct MaxRectTexturePacker *x0; struct __shared_weak_count *x1; })a2 sortedTrimArray:(const void *)a3 sortedTextureArray:(const void *)a4;

@end
