@interface TSImageCache : NSObject <TSImageCacheType> {
    void /* unknown type, empty encoding */ downloader;
    void /* unknown type, empty encoding */ processor;
    void /* unknown type, empty encoding */ underlyingCache;
    void /* unknown type, empty encoding */ fetchDeduper;
    void /* unknown type, empty encoding */ mainLRU;
}

- (void)fetchImageForRequest:(id)a0 completion:(id /* block */)a1;
- (id)fetchImageForRequest:(id)a0;
- (void)fetchImageForRequest:(id)a0 expires:(BOOL)a1 completion:(id /* block */)a2;
- (void)setImage:(id)a0 forRequest:(id)a1;
- (void)cancelAllRunningOperations;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUnderlyingCache:(id)a0 processor:(id)a1 downloader:(id)a2;
- (void)didReceiveMemoryWarning:(id)a0;

@end
