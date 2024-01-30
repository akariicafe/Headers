@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface REAppIconCache : RESingleton {
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)_init;
- (void)_loadRemoteIconForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_loadIconForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)iconForApplicationWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
