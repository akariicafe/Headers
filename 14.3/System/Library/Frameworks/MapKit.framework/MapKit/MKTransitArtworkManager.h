@class VKIconManager;

@interface MKTransitArtworkManager : NSObject

@property (readonly, nonatomic) VKIconManager *iconManager;

+ (id)sharedInstance;

- (void)purge;
- (id)initWithIconManager:(id)a0;
- (void).cxx_destruct;
- (id)_imageFroMVKImage:(id)a0;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(id /* block */)a0;
- (id)_vkImageWithShieldDataSource:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4 widthPaddingMultiple:(double)a5;
- (id)transitArtworkImageWithDataSource:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4;
- (id)transitArtworkImageWithDataSource:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4 withWidthPaddingMultiple:(double)a5;
- (id)transitArtworkImageWithShieldDataSource:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4;
- (id)_imageWithDataSource:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4 withWidthPaddingMultiple:(double)a5 fullBleedColor:(id *)a6;
- (BOOL)_isMemoryConstrained;
- (id)transitArtworkImageWithDataSource:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4 withWidthPaddingMultiple:(double)a5 fullBleedColor:(id *)a6;

@end
