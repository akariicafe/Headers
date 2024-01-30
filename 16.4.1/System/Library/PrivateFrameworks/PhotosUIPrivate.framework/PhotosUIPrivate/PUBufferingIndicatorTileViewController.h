@class PUBrowsingVideoPlayer, PUAssetViewModel, UIActivityIndicatorView, PUBrowsingViewModel, PUOneUpMergedVideoProvider, NSString, UIButton;

@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PXChangeObserver>

@property (retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, setter=_setIndicatorStyle:) long long _indicatorStyle;
@property (retain, nonatomic, setter=_setSpinner:) UIActivityIndicatorView *_spinner;
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (copy, nonatomic) id /* block */ errorAlertControllerDisplayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })bufferingIndicatorTileSize;
+ (BOOL)canShowBufferingIndicatorTileForAsset:(id)a0;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)becomeReusable;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_handleErrorButton:(id)a0;
- (void)_setIndicatorStyle:(long long)a0 animated:(BOOL)a1;
- (void)_updateIndicator;

@end
