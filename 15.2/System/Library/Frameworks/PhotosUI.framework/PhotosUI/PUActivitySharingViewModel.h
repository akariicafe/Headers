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

- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)a0;
- (id)initWithActivitySharingConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setActionSheet:(BOOL)a0;

@end
