@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {
    struct { unsigned char haveCGCacheImages : 1; unsigned char imagesHaveBeenLoaded : 1; } _plaFlags;
}

@property (readonly, copy, nonatomic) NSArray *imagePaths;
@property (readonly, nonatomic) BOOL haveCGCacheImages;

- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1;
- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1 imagePaths:(id)a2 haveCGCacheImages:(BOOL)a3;
- (id)_initWithAssetName:(id)a0 forManager:(id)a1;
- (id)imageWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)_containsImagesInPath:(id)a0;
- (void)_clearResolvedImageResources;

@end
