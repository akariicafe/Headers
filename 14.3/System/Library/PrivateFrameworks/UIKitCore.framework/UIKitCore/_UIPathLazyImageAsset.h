@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {
    BOOL _imagesHaveBeenLoaded;
}

@property (copy, nonatomic) NSArray *imagePaths;
@property (nonatomic) BOOL haveCGCacheImages;

- (void)_clearResolvedImageResources;
- (void).cxx_destruct;
- (BOOL)_containsImagesInPath:(id)a0;
- (id)imageWithConfiguration:(id)a0;

@end
