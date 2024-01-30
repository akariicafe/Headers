@class PXFetchResultCountObserver, NSString, PXPhotosViewModel, PXCloudQuotaControllerHelper, PXCPLUIStatusProvider, PXFilterFooterController, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate, PXAssetsSharingHelperDelegate> {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXFilterFooterController *_filterFooterController;
    PXFetchResultCountObserver *_renderingCountObserver;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCplUIStatusProvider:(id)a0;
- (void)_systemPhotoLibraryDidChange;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (void)_updateFooterViewModel;
- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_refreshCPLUIStatusProvider;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (void)_updateHasImportantInformation;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;
- (id)_createCPLUIStatusProvider;
- (void)viewDidAppear;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;

@end
