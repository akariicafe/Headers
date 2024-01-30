@class PUUIImagePickerControllerHelper, NSArray, NSString, UIBarButtonItem;
@protocol PUPhotoPicker;

@interface PUUIAlbumListViewController : PUAlbumListViewController <PUPhotoPickerServicesConsumer> {
    UIBarButtonItem *_imagePickerCancelButton;
    BOOL _collectionsFetchResultIsValid;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
}

@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes;
@property (nonatomic, setter=_setImagePickerAssetTypes:) unsigned long long _imagePickerAssetTypes;
@property (weak, nonatomic) id<PUPhotoPicker> photoPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)assetsFilterPredicate;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_invalidateCollectionsFetchResult;
- (void)_updateCollectionsFetchResultIfNeeded;
- (id)_imagePickerControllerHelper;
- (void)_handleImagePickerCancel:(id)a0;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateNavigationBarAnimated:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)filteringAssetTypes;
- (BOOL)canShowAvatarViews;
- (BOOL)shouldAllowEmailInAlbumSubtitle;
- (BOOL)shouldShowAllPhotosItem;
- (BOOL)shouldHideEmptyCollections;
- (id)newGridViewControllerForFolder:(id)a0;
- (id)newGridViewControllerForAssetCollection:(id)a0;
- (id)newGridViewControllerForAllPhotos;
- (void)viewDidLoad;
- (void)setPhotoPickerMediaTypes:(id)a0;

@end
