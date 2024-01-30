@class NSArray;

@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache {
    NSArray *_libraryCollections;
}

+ (id)sharedCache;
+ (id)keyForFaceStyle:(long long)a0 editOption:(id)a1 mode:(long long)a2 selectedOptions:(id)a3;

- (void).cxx_destruct;
- (id)_init;
- (void)_cleanCache;
- (void)_removeImagesForKeysMatching:(id /* block */)a0;

@end
