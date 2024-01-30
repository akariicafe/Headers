@class PHFetchResult, NSString, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

@interface PUActivitySharingViewModel : PXObservable

@property (retain, nonatomic) PUPhotoSelectionManager *selectionManager;
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic, getter=isActionSheet) BOOL actionSheet;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) long long sourceOrigin;

- (id)init;
- (void).cxx_destruct;
- (id)initWithActivitySharingConfiguration:(id)a0;
- (void)setActionSheet:(BOOL)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;

@end
