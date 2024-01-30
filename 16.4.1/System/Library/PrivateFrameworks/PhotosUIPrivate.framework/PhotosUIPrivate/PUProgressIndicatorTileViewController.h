@class UIView, PUOperationStatus, PUAssetViewModel, PLRoundProgressView, PUBrowsingViewModel, PUBrowsingVideoPlayer, UIButton, NSString, NSObject, PUAssetSharedViewModel, UILabel;
@protocol OS_os_log;

@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, _PUProgressIndicatorTileViewDelegate>

@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) BOOL _needsUpdateProgressViewStyle;
@property (nonatomic, setter=_setNeedsUpdateStatus:) BOOL _needsUpdateStatus;
@property (nonatomic, setter=_setNeedsUpdateSizeClass:) BOOL _needsUpdateSizeClass;
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) BOOL _needsUpdateStatusViews;
@property (nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle;
@property (copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status;
@property (nonatomic, setter=_setSizeClass:) long long _sizeClass;
@property (retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView;
@property (nonatomic, setter=_setProgressViewVisible:) BOOL _isProgressViewVisible;
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton;
@property (retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel;
@property (readonly, nonatomic) NSObject<OS_os_log> *_progressLog;
@property (nonatomic, getter=_didStartProgressLogging, setter=_setDidStartProgressLogging:) BOOL _didStartProgressLogging;
@property (weak, nonatomic) UIView *vkVisualSearchCornerView;
@property (weak, nonatomic) UIButton *vkAnalysisButton;
@property (nonatomic) BOOL isProgressViewAnimatingOut;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (copy, nonatomic) id /* block */ errorPresenter;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })progressIndicatorIconInsetsForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })progressIndicatorIconSizeForSizeClass:(long long)a0;

- (void)_layoutVKAnalysisButton;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateStatusViewsIfNeeded;
- (void)_handleBrowsingViewModel:(id)a0 didChange:(id)a1;
- (void)_handleErrorButtonTap:(id)a0;
- (id)view;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)_handleVideoPlayer:(id)a0 didChange:(id)a1;
- (BOOL)_needsUpdate;
- (void)_setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateStatusIfNeeded;
- (void)_setNeedsUpdate;
- (void)viewTraitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_invalidateStatusViews;
- (void)_handleAssetViewModel:(id)a0 didChange:(id)a1;
- (void)_invalidateProgressViewStyle;
- (void)applyLayoutInfo:(id)a0;
- (void)_invalidateSizeClass;
- (void)postReloadNotification;
- (void)_updateSizeClassIfNeeded;
- (void)_layoutVisualSearchCornerView;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (void)_updateSubviewOrdering;
- (void)_invalidateStatus;
- (void).cxx_destruct;
- (id)loadView;

@end
