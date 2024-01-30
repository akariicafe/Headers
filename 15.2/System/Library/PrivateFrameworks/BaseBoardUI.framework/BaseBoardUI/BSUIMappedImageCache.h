@class BSUIMappedImageCacheOptions, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BSUIMappedImageCache : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding> {
    NSString *_path;
    NSString *_uniqueIdentifier;
    BSUIMappedImageCacheOptions *_options;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_keysToImagesOrFutures;
    NSMutableSet *_queue_allKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithName:(id)a0 options:(unsigned long long)a1;
- (void)removeAllObjects;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)imageForKey:(id)a0 generatingIfNecessaryWithBlock:(id /* block */)a1;
- (id)allKeys;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)setImage:(id)a0 forKey:(id)a1;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)imageForKey:(id)a0 generatingIfNecessaryWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)imageForKey:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 options:(id)a1;
- (void)removeImageForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeAllImagesWithCompletion:(id /* block */)a0;
- (void)setImage:(id)a0 forKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)setImage:(id)a0 forKey:(id)a1 withPersistenceOptions:(unsigned long long)a2;
- (void)setImage:(id)a0 forKey:(id)a1 withPersistenceOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)removeImageForKey:(id)a0;
- (id)_imageForKey:(id)a0 withCPBitmapReadFlags:(int)a1 generatingIfNecessaryWithBlock:(id /* block */)a2;
- (void)_setImage:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)_setImage:(id)a0 forKey:(id)a1 withPersistenceOptions:(unsigned long long)a2 andCPBitmapReadFlags:(int)a3;
- (void)_warmupImageForKey:(id)a0;
- (void)_noteExternalChangeForKey:(id)a0;

@end
