@class UIImageView, QLRoundProgressView, QLDetailItemViewControllerState, UIImage, QLItem;
@protocol QLDownloadingItemViewControllerDelegate;

@interface QLDownloadingItemViewController : QLDetailItemViewController {
    BOOL _downloading;
    BOOL _didDisappear;
    id _progressSubscriber;
    QLDetailItemViewControllerState *_readyForDownloadState;
    QLDetailItemViewControllerState *_cancelableDownloadingState;
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;
    QLDetailItemViewControllerState *_completedDownloadState;
    QLDetailItemViewControllerState *_previewLoadingState;
    UIImageView *_downloadImageView;
    UIImage *_cloudImage;
    QLItem *_previewItem;
}

@property (nonatomic) BOOL downloaded;
@property (readonly, nonatomic) QLRoundProgressView *progressView;
@property (weak, nonatomic) id<QLDownloadingItemViewControllerDelegate> downloadingDelegate;
@property (nonatomic) BOOL showsLoadingPreviewSpinner;

- (void)performAction;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)startDownload:(BOOL)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)_startDownload:(BOOL)a0;
- (void)_presentConnectivityAlert;
- (void)_setDownloading:(BOOL)a0 animated:(BOOL)a1;
- (void)_startDownloadOperation;
- (void)_stopDownload:(BOOL)a0;
- (void)_toggleDownload:(BOOL)a0;
- (void)_updateFileSizeWithProgress:(double)a0 animated:(BOOL)a1;
- (BOOL)shouldAutoDownloadInNetworkState:(unsigned long long)a0 downloadSize:(id)a1 forceIfPossible:(BOOL)a2;
- (void)startDownloadIfNeeded;

@end
