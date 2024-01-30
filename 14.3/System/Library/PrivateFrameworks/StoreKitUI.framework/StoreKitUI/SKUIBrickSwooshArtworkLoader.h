@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {
    long long _artworkSize;
}

@property (readonly, nonatomic) SKUIBrickSwooshViewController *swooshViewController;

- (void)setImage:(id)a0 forRequest:(id)a1;
- (id)initWithArtworkLoader:(id)a0 swoosh:(id)a1;
- (BOOL)loadImageForBrick:(id)a0 reason:(long long)a1;
- (id)cachedImageForBrick:(id)a0;
- (void)loadImagesForNextPageWithReason:(long long)a0;

@end
