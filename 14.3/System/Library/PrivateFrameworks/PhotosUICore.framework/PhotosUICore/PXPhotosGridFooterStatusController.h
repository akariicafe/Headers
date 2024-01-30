@class NSString, PXPhotosViewModel, PXContentFilterFooterController, PXCPLUIStatusProvider, PXCloudQuotaController, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerDelegate> {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaController *_cloudQuotaController;
    PXContentFilterFooterController *_filterFooterController;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_systemPhotoLibraryDidChange;
- (void)viewDidAppear;
- (void)cloudQuotaController:(id)a0 informationBannerDidChange:(id)a1;
- (void)setCplUIStatusProvider:(id)a0;
- (id)_createCPLUIStatusProvider;
- (id)init;
- (void).cxx_destruct;
- (id)presentingViewControllerForCloudQuotaController:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_refreshCPLUIStatusProvider;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;
- (void)_updateHasImportantInformation;
- (void)_updateFooterViewModel;

@end
