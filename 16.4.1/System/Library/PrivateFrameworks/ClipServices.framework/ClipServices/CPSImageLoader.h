@class CPSMapsImageLoader, CPSImageDownloader, CPSImageStore;

@interface CPSImageLoader : NSObject

@property (retain, nonatomic) CPSImageDownloader *imageDownloader;
@property (retain, nonatomic) CPSMapsImageLoader *mapsImageLoader;
@property (retain, nonatomic) CPSImageStore *imageStore;

- (id)init;
- (void).cxx_destruct;
- (void)loadImageForGEOStyleAttributes:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadImageForMapItemMUID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadImageWithURL:(id)a0 completionHandler:(id /* block */)a1;

@end
