@class SUImageCache, UIImage, ISURLOperationPool, SUImageDataProvider;

@interface SUArtworkCellContext : SUCellConfigurationContext

@property (retain, nonatomic) SUImageCache *imageCache;
@property (retain, nonatomic) ISURLOperationPool *imagePool;
@property (retain, nonatomic) SUImageDataProvider *imageProvider;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void)dealloc;

@end
