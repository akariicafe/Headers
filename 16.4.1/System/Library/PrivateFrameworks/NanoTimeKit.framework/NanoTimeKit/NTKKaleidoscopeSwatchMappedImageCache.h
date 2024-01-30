@class NSString, NSArray, NSMutableArray;

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver> {
    id _activeDeviceNotificationBlock;
    NSArray *_libraryCollections;
    NSMutableArray *_loadedCollections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;
+ (id)keyForAsset:(id)a0 style:(id)a1 resourceDirectory:(id)a2;

- (void)faceCollectionDidLoad:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)_cleanCache;
- (void)_pruneUnusedKeys;
- (void)_removeImagesForKeysMatching:(id /* block */)a0;

@end
