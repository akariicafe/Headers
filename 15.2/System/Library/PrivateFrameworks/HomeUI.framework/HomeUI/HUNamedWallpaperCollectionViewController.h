@class NSArray, NSMutableDictionary;
@protocol HUNamedWallpaperCollectionViewControllerDelegate;

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) NSArray *wallpapers;
@property (retain, nonatomic) NSMutableDictionary *wallpaperImageCache;
@property (readonly, weak, nonatomic) id<HUNamedWallpaperCollectionViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long collectionType;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 horizontalInset:(double)a1 delegate:(id)a2;

@end
