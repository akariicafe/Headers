@class NSArray, PXCloudQuotaControllerHelper, NSString, PXCPLUIStatusProvider, PXPhotoKitAssetsDataSourceManager;
@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerHelperDelegate, PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, nonatomic) NSArray *syncProgressAlbums;
@property (retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (retain, nonatomic) PXCloudQuotaControllerHelper *cloudQuotaHelper;
@property (weak, nonatomic) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)_updateExposedProperties;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;

@end
