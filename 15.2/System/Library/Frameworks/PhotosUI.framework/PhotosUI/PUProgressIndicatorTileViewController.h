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
@property (nonatomic) BOOL allowsVKToggleModeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })progressIndicatorIconSizeForSizeClass:(long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })progressIndicatorIconInsetsForSizeClass:(long long)a0;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateSizeClassIfNeeded;
- (void)_updateSubviewOrdering;
- (void)_handleAssetViewModel:(id)a0 didChange:(id)a1;
- (void)_handleBrowsingViewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)becomeReusable;
- (void)_updateStatusViewsIfNeeded;
- (void)_setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)_layoutVKAnalysisButton;
- (void)_invalidateProgressViewStyle;
- (void)_handleErrorButtonTap:(id)a0;
- (id)view;
- (void)_updateIfNeeded;
- (id)loadView;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (void).cxx_destruct;
- (void)_invalidateSizeClass;
- (void)_layoutVisualSearchCornerView;
- (void)_invalidateStatusViews;
- (void)_invalidateStatus;
- (void)postReloadNotification;
- (void)_handleVideoPlayer:(id)a0 didChange:(id)a1;
- (void)viewTraitCollectionDidChange:(id)a0;
- (void)_updateStatusIfNeeded;
- (void)_updateProgressViewStyleIfNeeded;

@end
