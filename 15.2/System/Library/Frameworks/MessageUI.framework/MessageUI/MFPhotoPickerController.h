@class PHCachingImageManager, PHFetchResult, MFPhotoPickerProgressManager, NSSet, NSString, UIImagePickerController, NSMutableSet;
@protocol MFPhotoPickerControllerDelegate;

@interface MFPhotoPickerController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MFPreferredHeightProviding> {
    NSMutableSet *_selectedAssetIdentifiers;
    struct { unsigned char delegateRespondsToPickerDidCancel : 1; unsigned char delegateRespondsToSystemPickerDidCancel : 1; unsigned char delegateRespondsToDidDeselectAssetWithIdentifier : 1; unsigned char delegateRespondsToPresentingViewControllerForPhotoPicker : 1; } _flags;
}

@property (retain, nonatomic) PHFetchResult *photosFetchResult;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic) double availableWidth;
@property (retain, nonatomic) UIImagePickerController *systemImagePicker;
@property (retain, nonatomic) MFPhotoPickerProgressManager *progressManager;
@property (readonly, nonatomic) NSSet *selectedAssetIdentifiers;
@property (weak, nonatomic) id<MFPhotoPickerControllerDelegate> pickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)close:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (id)initWithPhotoPickerProgressManager:(id)a0;
- (void)addSelectedAssetIdentifiers:(id)a0;
- (id)_visibleCellForIndexPath:(id)a0 collectionView:(id)a1;
- (void)addSelectedAssetIdentifier:(id)a0;
- (void)removeSelectedAssetIdentifier:(id)a0;
- (void)showSystemImagePicker:(id)a0;
- (void)removeAllSelectedAssetIdentifiers;
- (BOOL)_isPresentingInASheet;

@end
