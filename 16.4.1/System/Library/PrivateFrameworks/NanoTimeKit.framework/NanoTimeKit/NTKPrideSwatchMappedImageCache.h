@class NSArray;

@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache {
    NSArray *_libraryCollections;
}

+ (id)sharedCache;
+ (id)keyForFaceStyle:(id)a0 editOption:(id)a1 mode:(long long)a2 selectedOptions:(id)a3;

- (id)_init;
- (void).cxx_destruct;
- (void)_cleanCache;
- (void)_removeImagesForKeysMatching:(id /* block */)a0;

@end
