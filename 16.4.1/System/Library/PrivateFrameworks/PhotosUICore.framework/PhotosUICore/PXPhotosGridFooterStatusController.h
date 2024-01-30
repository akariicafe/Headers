@class PXFetchResultCountObserver, NSString, PXPhotosViewModel, PXCloudQuotaControllerHelper, PXCPLUIStatusProvider, PXFilterFooterController, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate, PXAssetsSharingHelperDelegate> {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    Class _cplActionManagerClass;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXFilterFooterController *_filterFooterController;
    PXFetchResultCountObserver *_renderingCountObserver;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_systemPhotoLibraryDidChange;
- (void)_updateFooterIfNeeded;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;
- (void)_refreshCPLUIStatusProvider;
- (void)viewDidAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setCplUIStatusProvider:(id)a0;
- (void)_updateHasImportantInformation;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (void)_updateFooterViewModel;
- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;
- (id)init;
- (id)_createCPLUIStatusProvider;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end
