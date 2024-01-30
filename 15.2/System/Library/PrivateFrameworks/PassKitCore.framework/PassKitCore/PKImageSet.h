@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *originCacheURL;
@property (nonatomic) long long version;

+ (unsigned int)currentVersion;
+ (id)createXPCContainerForImageSetWithType:(long long)a0 displayProfile:(id)a1 screenScale:(double)a2 screenSize:(struct CGSize { double x0; double x1; })a3 suffix:(id)a4 fileURL:(id)a5 cacheURL:(id)a6;
+ (BOOL)shouldCache;
+ (long long)imageSetType;
+ (id)_archiveImageSetIfAppropriate:(id)a0 screenScale:(double)a1 screenSize:(struct CGSize { double x0; double x1; })a2 archiveURL:(id)a3 cacheURL:(id)a4;
+ (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 fileURL:(id)a4;
+ (id)_archiveURL:(id)a0;
+ (id)createXPCContainerForImageSet:(id)a0 screenScale:(double)a1 screenSize:(struct CGSize { double x0; double x1; })a2 cacheURL:(id)a3;
+ (Class)classForDisplayProfile:(id)a0 imageSetType:(long long)a1;
+ (id)cachedXPCContainerForImageSetWithType:(long long)a0 displayProfile:(id)a1 displayTraits:(id)a2 cacheURL:(id)a3;
+ (Class)classForImageSetType:(long long)a0;
+ (id)_createXPCContainerForImageSetWithType:(long long)a0 displayProfile:(id)a1 screenScale:(double)a2 screenSize:(struct CGSize { double x0; double x1; })a3 suffix:(id)a4 fileURL:(id)a5 cacheURL:(id)a6 imageSetOut:(id *)a7;
+ (id)archiveName;
+ (BOOL)shouldCacheForDisplayProfile:(id)a0 imageSetType:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (BOOL)_isSetImage:(id)a0 equalToImage:(id)a1;

@end
