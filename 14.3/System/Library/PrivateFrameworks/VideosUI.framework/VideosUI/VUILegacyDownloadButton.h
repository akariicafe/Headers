@class VUICircularProgress, UIAlertController, UIImage, VUIDownloadButtonViewModel, UIViewController;

@interface VUILegacyDownloadButton : VUILegacyButton

@property (retain, nonatomic) UIImage *notDownloadedImage;
@property (retain, nonatomic) UIImage *connectingImage;
@property (retain, nonatomic) UIImage *downloadingImage;
@property (retain, nonatomic) UIImage *downloadedImage;
@property (retain, nonatomic) UIImage *expiredDownloadImage;
@property (retain, nonatomic) VUIDownloadButtonViewModel *viewModel;
@property (retain, nonatomic) VUICircularProgress *progressIndicator;
@property (nonatomic) BOOL observingDownloadProgress;
@property (nonatomic) BOOL wasDeleted;
@property (nonatomic) BOOL wasCanceled;
@property (nonatomic) BOOL isForLibrary;
@property (retain, nonatomic) UIAlertController *deleteConfirmationAlertController;
@property (nonatomic) BOOL showsTextInDownloadedState;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ downloadStateChangeHandler;

+ (id)defaultLayout;

- (void)_setImage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithElement:(id)a0;
- (id)initWithMediaEntity:(id)a0 layout:(id)a1;
- (void)updateWithAssetController:(id)a0;
- (void)_downloadButtonTapped:(id)a0;
- (void)_updateButtonToState:(unsigned long long)a0 downloadExpirationDate:(id)a1;
- (void)_layoutProgressIndicator;
- (struct CGSize { double x0; double x1; })_imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateButtonToState:(unsigned long long)a0 oldState:(unsigned long long)a1;
- (void)_updateDownloadProgress:(double)a0 animated:(BOOL)a1;
- (void)_stopObservingViewModel:(id)a0;
- (void)_stopObservingDownloadProgress:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (id)_buttonPropertiesForState:(unsigned long long)a0 downloadExpirationDate:(id)a1;
- (void)_updateButtonToDownloadedWithProperties:(id)a0;
- (id)_localize:(id)a0 token:(id)a1 value:(id)a2;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(BOOL)a0;
- (void)_askUserAndDeleteIfNeeded;
- (BOOL)_shouldShowRenewalOption;
- (id)_renewalAlertAction;
- (void)_dismissConfirmationAlertController;
- (id)_expiredDownloadImage;
- (id)_notDownloadedImage;
- (id)_connectingImage;
- (id)_downloadingImage;
- (id)_downloadedImage;
- (void)_updateButtonToNotDownloadedWithProperties:(id)a0;
- (void)_updateButtonToConnectingWithProperties:(id)a0;
- (void)_updateButtonToDownloadingWithProperties:(id)a0;
- (void)_setTitleWithProperties:(id)a0;
- (void)_insertProgressIndicatorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureProgressIndicatorWithProperties:(id)a0;
- (void)_startObservingDownloadProgress:(id)a0;
- (id)_imageForDownloadState:(unsigned long long)a0 downloadExpirationDate:(id)a1;
- (id)_pausedImage;
- (id)initWithAssetController:(id)a0 layout:(id)a1;
- (id)initWithPlayable:(id)a0 layout:(id)a1;

@end
