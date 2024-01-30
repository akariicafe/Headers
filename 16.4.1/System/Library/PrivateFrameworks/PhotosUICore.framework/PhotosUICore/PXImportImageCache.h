@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXImportImageCache : NSObject {
    unsigned short _imageFormat;
    NSMutableDictionary *_caches;
    NSObject<OS_dispatch_queue> *_cacheTableQueue;
}

+ (id)sharedInstance;

- (void)tearDown;
- (id)init;
- (void).cxx_destruct;
- (void)accessImageTableForIdentifier:(id)a0 withChangeBlock:(id /* block */)a1;
- (id)cacheTableForIdentifier:(id)a0;
- (void)configureWithFormat:(unsigned short)a0;
- (id)imageForIdentifer:(id)a0;
- (void)imageForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)imageForModel:(id)a0 ofSize:(unsigned long long)a1 allowLowerResolutions:(BOOL)a2 completion:(id /* block */)a3;
- (id)imageForModel:(id)a0 ofSize:(unsigned long long)a1 allowLowerResolutions:(BOOL)a2 foundSize:(unsigned long long *)a3;
- (void)removeCacheForIdentifiers:(id)a0;
- (void)setImage:(id)a0 forIdentifier:(id)a1;
- (void)setImage:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;

@end
