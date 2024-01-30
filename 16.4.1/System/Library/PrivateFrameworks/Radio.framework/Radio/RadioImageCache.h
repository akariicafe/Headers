@class NSOperationQueue;

@interface RadioImageCache : NSObject {
    NSOperationQueue *_imageRequestQueue;
}

+ (id)sharedCache;
+ (struct __CFURLStorageSession { } *)_newSharedCacheStorageSession;
+ (struct _CFURLCache { } *)_sharedCFURLCache;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_cachedResponseForRequest:(id)a0;
- (void)_removeAllCachedImages;
- (id)_requestForRadioArtwork:(id)a0;
- (id)cachedImageDataForRadioArtwork:(id)a0 MIMEType:(id *)a1;
- (id)cachedImageDataForStation:(id)a0 withExactSize:(struct CGSize { double x0; double x1; })a1 MIMEType:(id *)a2;
- (void)loadImageForRadioArtwork:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadImageForStation:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;

@end
