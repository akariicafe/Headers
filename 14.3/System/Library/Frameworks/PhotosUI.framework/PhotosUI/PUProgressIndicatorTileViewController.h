@class PUOperationStatus, NSString, PLRoundProgressView, PUBrowsingVideoPlayer, UIButton, NSObject, PUAssetSharedViewModel, UILabel;
@protocol OS_os_log;

@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>

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
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (copy, nonatomic) id /* block */ errorPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })progressIndicatorIconInsetsForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })progressIndicatorIconSizeForSizeClass:(long long)a0;

- (void)_updateSubviewOrdering;
- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)postReloadNotification;
- (void)_handleErrorButtonTap:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_needsUpdate;
- (void)_invalidateStatus;
- (void)_updateIfNeeded;
- (void)_invalidateProgressViewStyle;
- (void)becomeReusable;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_handleVideoPlayer:(id)a0 didChange:(id)a1;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (void)_updateSizeClassIfNeeded;
- (void)_updateStatusViewsIfNeeded;
- (void)_invalidateStatusViews;
- (void)_invalidateSizeClass;
- (void)viewDidLoad;
- (void)_updateStatusIfNeeded;

@end
