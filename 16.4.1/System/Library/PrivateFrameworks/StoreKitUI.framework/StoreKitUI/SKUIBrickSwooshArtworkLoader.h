@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {
    long long _artworkSize;
}

@property (readonly, nonatomic) SKUIBrickSwooshViewController *swooshViewController;

- (id)cachedImageForBrick:(id)a0;
- (id)initWithArtworkLoader:(id)a0 swoosh:(id)a1;
- (BOOL)loadImageForBrick:(id)a0 reason:(long long)a1;
- (void)loadImagesForNextPageWithReason:(long long)a0;
- (void)setImage:(id)a0 forRequest:(id)a1;

@end
