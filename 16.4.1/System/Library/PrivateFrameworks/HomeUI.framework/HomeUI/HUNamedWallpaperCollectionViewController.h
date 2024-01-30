@class NSArray, NSMutableDictionary;
@protocol HUNamedWallpaperCollectionViewControllerDelegate;

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) NSArray *wallpapers;
@property (retain, nonatomic) NSMutableDictionary *wallpaperImageCache;
@property (retain, nonatomic) NSArray *wallpaperThumbnails;
@property (retain, nonatomic) NSMutableDictionary *wallpaperThumbnailCache;
@property (readonly, weak, nonatomic) id<HUNamedWallpaperCollectionViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long collectionType;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 horizontalInset:(double)a1 delegate:(id)a2;

@end
