@interface SKTextureAtlasPacker : NSObject

+ (struct CGImage { } *)copyProcessedImageSource:(id)a0;

- (void)generateTextureAtlasImages:(id)a0 outputDictionary:(id *)a1 forcePOT:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcNonAlphaArea:(struct CGImage { } *)a0;
- (struct CGImage { } *)copyRotateCGImage:(struct CGImage { } *)a0 direction:(BOOL)a1;
- (BOOL)isFullyOpaque:(struct CGImage { } *)a0;
- (id)partitionTextureFilesByResolution:(id)a0;
- (id)generateMetaData;
- (id)processPackedTextureAtlas:(const struct vector<CGSize, std::__1::allocator<CGSize> > { struct CGSize *x0; struct CGSize *x1; struct __compressed_pair<CGSize *, std::__1::allocator<CGSize> > { struct CGSize *x0; } x2; } *)a0 suffix:(id)a1 packer:(struct shared_ptr<MaxRectTexturePacker> { struct MaxRectTexturePacker *x0; struct __shared_weak_count *x1; })a2 sortedTrimArray:(const struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect *x0; } x2; } *)a3 sortedTextureArray:(const struct vector<TextureInfo, std::__1::allocator<TextureInfo> > { struct TextureInfo *x0; struct TextureInfo *x1; struct __compressed_pair<TextureInfo *, std::__1::allocator<TextureInfo> > { struct TextureInfo *x0; } x2; } *)a4;
- (id)getTextureFileList:(id)a0 modDate:(id *)a1;

@end
