@class CPSImageDownloader, NSObject;
@protocol OS_dispatch_queue;

@interface CPSMapsImageLoader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CPSImageDownloader *_imageDownloader;
}

- (void).cxx_destruct;
- (void)_loadImageForGEOFeatureStyleAttributes:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithImageDownloader:(id)a0;
- (void)loadImageForGEOStyleAttributes:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadImageForMapItemMUID:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
