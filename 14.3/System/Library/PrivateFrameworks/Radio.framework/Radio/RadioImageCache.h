@class NSOperationQueue;

@interface RadioImageCache : NSObject {
    NSOperationQueue *_imageRequestQueue;
}

+ (id)sharedCache;
+ (struct _CFURLCache { } *)_sharedCFURLCache;
+ (struct __CFURLStorageSession { } *)_newSharedCacheStorageSession;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (id)_cachedResponseForRequest:(id)a0;
- (id)cachedImageDataForRadioArtwork:(id)a0 MIMEType:(id *)a1;
- (void)loadImageForRadioArtwork:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_requestForRadioArtwork:(id)a0;
- (id)cachedImageDataForStation:(id)a0 withExactSize:(struct CGSize { double x0; double x1; })a1 MIMEType:(id *)a2;
- (void)loadImageForStation:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)_removeAllCachedImages;

@end
