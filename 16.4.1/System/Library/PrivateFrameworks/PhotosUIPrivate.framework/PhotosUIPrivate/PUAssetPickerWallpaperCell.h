@class NSString, PXWallpaperSuggestionView, UIView;
@protocol PXDisplayAsset;

@interface PUAssetPickerWallpaperCell : UICollectionViewCell

@property (class, readonly, nonatomic) NSString *identifier;

@property (readonly, nonatomic) PXWallpaperSuggestionView *imageView;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) UIView *selectedView;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (nonatomic) BOOL isAssetSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
