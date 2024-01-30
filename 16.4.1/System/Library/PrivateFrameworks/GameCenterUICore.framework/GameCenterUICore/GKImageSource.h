@class GKThreadsafeCache, NSString, UIImage, GKImageBrush;

@interface GKImageSource : NSObject

@property (retain, nonatomic) UIImage *renderedDefaultImage;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) GKImageBrush *imageBrush;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) BOOL shouldRenderDefaultImageWithBrush;
@property (retain, nonatomic) GKThreadsafeCache *cache;

+ (id)sharedCache;
+ (void)clearCache;
+ (id)syncQueue;
+ (id)cacheDirectoryForImageID:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cacheImageFromContext:(id)a0 forIdentifier:(id)a1;
- (id)cachedImageForIdentifier:(id)a0;
- (void)clearCachedImageForIdentifier:(id)a0;
- (id)fastCachedImageForIdentifier:(id)a0;
- (id)fastCachedOrDefaultImageForIdentifier:(id)a0;
- (id)initWithName:(id)a0 imageBrush:(id)a1;
- (id)keyForImageIdentifier:(id)a0;
- (id)processAndCacheImage:(id)a0 forIdentifier:(id)a1;
- (id)subsourceWithBrush:(id)a0;
- (void)_storeImage:(id)a0 cacheKey:(id)a1 path:(id)a2 context:(id)a3;
- (unsigned long long)cacheCostForImage:(id)a0;
- (id)cachedImageForKey:(id)a0;
- (id)fastCachedImageForKey:(id)a0;
- (id)fastCachedOrDefaultImageForForKey:(id)a0;
- (id)processAndCacheImage:(id)a0 forKey:(id)a1;
- (id)processAndCacheImageDataInContext:(id)a0 withImage:(id)a1 forIdentifier:(id)a2;
- (id)processAndCacheImageDataInContext:(id)a0 withImage:(id)a1 forKey:(id)a2;
- (id)renderedImageWithImage:(id)a0;
- (id)renderedImageWithImage:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1 returnContext:(id *)a2;
- (id)renderedImageWithImage:(id)a0 returnContext:(id *)a1;
- (id)renderedTestImage;
- (BOOL)shouldUseTestImage;
- (void)validateFileSystemCache;

@end
