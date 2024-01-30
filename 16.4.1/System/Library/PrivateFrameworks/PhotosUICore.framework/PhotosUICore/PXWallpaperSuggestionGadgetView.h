@class PXWallpaperSuggestionView;
@protocol PXDisplayAsset;

@interface PXWallpaperSuggestionGadgetView : UICollectionViewCell

@property (nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) PXWallpaperSuggestionView *wallpaperView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
