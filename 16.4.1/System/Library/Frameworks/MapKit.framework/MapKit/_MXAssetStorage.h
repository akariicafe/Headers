@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _MXAssetStorage : NSObject {
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_storage;
    NSMutableSet *_loadingKeys;
    NSMutableDictionary *_fetchBlocks;
}

- (void)fetchAssetForKey:(id)a0 completion:(id /* block */)a1;
- (void)setAsset:(id)a0 forKey:(id)a1;
- (void)loadAssetForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
