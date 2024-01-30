@class NSArray, NSString, PXCPLUIStatusProvider, PXPhotoKitAssetsDataSourceManager, PXCloudQuotaController;
@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerDelegate, PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, nonatomic) NSArray *syncProgressAlbums;
@property (retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (retain, nonatomic) PXCloudQuotaController *cloudQuotaController;
@property (weak, nonatomic) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)cloudQuotaController:(id)a0 informationBannerDidChange:(id)a1;
- (void)_updateExposedProperties;
- (id)init;
- (void).cxx_destruct;
- (id)presentingViewControllerForCloudQuotaController:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;

@end
