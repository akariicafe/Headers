@class HUNamedWallpaperCollectionViewController, NSString, PHCachingImageManager, NSMutableDictionary, NSArray;
@protocol HUWallpaperPickerViewControllerDelegate;

@interface HUWallpaperPickerViewController : HUTableViewController <HUWallpaperEditingViewControllerDelegate, HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver>

@property (nonatomic) long long collectionType;
@property (retain, nonatomic) HUNamedWallpaperCollectionViewController *namedWallpaperController;
@property (copy, nonatomic) NSString *namedSectionTitle;
@property (readonly, nonatomic) BOOL shouldShowPhotoLibrary;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (retain, nonatomic) NSMutableDictionary *assetCollectionsToAssetFetchResults;
@property (retain, nonatomic) NSArray *assetCollections;
@property (readonly, weak, nonatomic) id<HUWallpaperPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)identifierForSection:(unsigned long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)contentSizeCategoryDidChange;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)wallpaperEditing:(id)a0 didFinishWithWallpaper:(id)a1 image:(id)a2;
- (void)wallpaperEditingDidCancel:(id)a0;
- (id)initWithCollectionType:(long long)a0 namedSectionTitle:(id)a1 delegate:(id)a2;
- (void)loadAssetCollections;
- (id)currentSectionIdentifiers;
- (void)namedWallpaperController:(id)a0 didChooseWallpaper:(id)a1 image:(id)a2;
- (void)photoCollectionController:(id)a0 didChooseWallpaper:(id)a1 image:(id)a2;

@end
