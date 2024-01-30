@class SKUILockupSwooshViewController, SKUIVideoImageDataConsumer, SKUIItemArtworkContext, UIImage;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {
    SKUIItemArtworkContext *_context;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
    UIImage *_videoPlaceholderImage;
}

@property (readonly, nonatomic) SKUILockupSwooshViewController *swooshViewController;

- (void).cxx_destruct;
- (id)cachedImageForItem:(id)a0;
- (id)cachedImageForVideo:(id)a0;
- (id)initWithArtworkLoader:(id)a0 swoosh:(id)a1;
- (BOOL)loadImageForItem:(id)a0 reason:(long long)a1;
- (BOOL)loadImageForVideo:(id)a0 reason:(long long)a1;
- (void)loadImagesForNextPageWithReason:(long long)a0;
- (id)placeholderImageForItem:(id)a0;
- (id)placeholderImageForVideo:(id)a0;
- (void)setImage:(id)a0 forRequest:(id)a1;

@end
