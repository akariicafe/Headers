@class PHPerson, PHFetchResult, NSString, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

@interface PUActivitySharingViewModel : PXObservable

@property (retain, nonatomic) PUPhotoSelectionManager *selectionManager;
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic, getter=isActionSheet) BOOL actionSheet;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) long long sourceOrigin;

- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)setActionSheet:(BOOL)a0;
- (id)initWithActivitySharingConfiguration:(id)a0;

@end
