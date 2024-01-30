@class NSCache, NSMutableDictionary;

@interface WBSFaviconProviderPrivateCache : NSObject {
    NSCache *_uuidToImageDataCache;
    NSMutableDictionary *_pageURLStringToIconInfoDict;
    NSMutableDictionary *_iconURLStringToIconInfoDict;
    NSMutableDictionary *_urlStringToRejectedResourceIconInfoDict;
}

- (id)imageInfoForIconURLString:(id)a0;
- (id)imageDataForPageURLString:(id)a0;
- (id)pageURLStringsWithPrefixesIn:(id)a0;
- (id)imageInfoForPageURLString:(id)a0;
- (void)removeImageDataForPageURLString:(id)a0;
- (id)rejectedResourceInfosForPageURLString:(id)a0 iconURLString:(id)a1;
- (BOOL)linkPageURLString:(id)a0 toIconURLString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setImageData:(id)a0 forPageURLString:(id)a1 iconURLString:(id)a2 iconSize:(struct CGSize { double x0; double x1; })a3 hasGeneratedResolutions:(BOOL)a4;
- (void)setIsRejectedResource:(BOOL)a0 forPageURLString:(id)a1 iconURLString:(id)a2;
- (id)imageDataForIconURLString:(id)a0;
- (void)removeAllImageDataWithCompletionHandler:(id /* block */)a0;
- (id)firstImageDataMatchingPageURLStringIn:(id)a0 matchedPageURLString:(id *)a1;

@end
