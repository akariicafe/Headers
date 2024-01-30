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

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)newGridViewControllerForFolder:(id)a0;
- (id)newGridViewControllerForAssetCollection:(id)a0;
- (id)init;
- (id)assetsFilterPredicate;
- (void)updateNavigationBarAnimated:(BOOL)a0;
- (id)newGridViewControllerForAllPhotos;
- (unsigned long long)filteringAssetTypes;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)shouldAllowEmailInAlbumSubtitle;
- (BOOL)shouldShowAllPhotosItem;
- (BOOL)shouldHideEmptyCollections;
- (BOOL)canShowAvatarViews;
- (void)setPhotoPickerMediaTypes:(id)a0;
- (void)_invalidateCollectionsFetchResult;
- (void)_updateCollectionsFetchResultIfNeeded;
- (id)_imagePickerControllerHelper;
- (void)_handleImagePickerCancel:(id)a0;

@end
