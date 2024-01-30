@class PXPhotoKitCollectionsDataSource, PUAlbumListViewControllerSpec, PUSessionInfo, PXPhotoKitCollectionsDataSourceManager;
@protocol PXGridPresentation;

@interface PUAlbumNavigationHelperParams : NSObject

@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (retain, nonatomic) PUAlbumListViewControllerSpec *spec;
@property (retain, nonatomic) id<PXGridPresentation> gridPresentation;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;

- (void).cxx_destruct;

@end
