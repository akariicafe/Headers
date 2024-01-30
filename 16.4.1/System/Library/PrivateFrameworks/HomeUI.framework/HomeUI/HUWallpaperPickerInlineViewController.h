@class NSString, NSArray, UIDropInteraction, UICollectionViewFlowLayout, NSMutableDictionary, UIImage, HFWallpaper, UIImagePickerController, HUWallpaperPhotoCell, NSIndexPath;
@protocol HUWallpaperPickerInlineViewControllerDelegate;

@interface HUWallpaperPickerInlineViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (retain, nonatomic) NSMutableDictionary *thumbnailCache;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (retain, nonatomic) HUWallpaperPhotoCell *customWallpaperCell;
@property (readonly) HFWallpaper *selectedWallpaper;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) HFWallpaper *customWallpaper;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long numberOfWallpapers;
@property (nonatomic) unsigned long long numberOfWallpapersFittingInWidth;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSArray *namedWallpapers;
@property (retain, nonatomic) NSArray *namedWallpaperThumbnails;
@property (readonly, nonatomic) double preferedHeight;
@property (retain, nonatomic) UIImage *originalCustomImage;
@property (weak, nonatomic) id<HUWallpaperPickerInlineViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useWallpaperPickerCell;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setSelectedIndexPath:(id)a0 animated:(BOOL)a1;
- (id)thumbnailWallpaperForIndexPath:(id)a0;
- (void)updateScrolling;
- (void)configureCell:(id)a0 image:(id)a1 wallpaper:(id)a2;
- (void)setCustomWallpaper:(id)a0 image:(id)a1;
- (void)setImageSizeToFitWidth:(double)a0 forNumberOfWallpapers:(unsigned long long)a1;
- (void)setSelectedWallpaper:(id)a0 animated:(BOOL)a1;
- (id)wallpaperForIndexPath:(id)a0;
- (void)wallpaperPhotoCellDidPressDeleteButton:(id)a0;

@end
