@class PUAssetViewModel, NSString, UIActivityIndicatorView, UIView;

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    UIView *_successView;
    UIView *_errorView;
    UIActivityIndicatorView *_progressIndicatorView;
}

@property (nonatomic) BOOL _isPerformingChanges;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyLayoutInfo:(id)a0;
- (void)_updateStatusView;
- (void).cxx_destruct;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)viewDidLoad;

@end
