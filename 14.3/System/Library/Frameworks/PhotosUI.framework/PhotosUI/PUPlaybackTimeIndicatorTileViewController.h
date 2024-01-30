@class PUBrowsingVideoPlayer, NSString, PUPlaybackTimeLabel, NSDate, PUBrowsingViewModel;
@protocol PUPlaybackTimeIndicatorTileViewControllerDelegate;

@interface PUPlaybackTimeIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver> {
    struct { BOOL respondsToCanFlashIndicator; } _delegateFlags;
}

@property (readonly, nonatomic) PUPlaybackTimeLabel *_label;
@property (nonatomic, setter=_setIndicatorFormat:) long long _indicatorFormat;
@property (nonatomic, setter=_setIndicatorVisible:) BOOL _isIndicatorVisible;
@property (retain, nonatomic) NSDate *forcedIndicatorVisibilityEndDate;
@property (weak, nonatomic) id<PUPlaybackTimeIndicatorTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })playbackTimeIndicatorTileSize;

- (void).cxx_destruct;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)videoPlayer:(id)a0 desiredSeekTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)becomeReusable;
- (void)videoPlayer:(id)a0 currentTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_setIndicatorFormat:(long long)a0 animated:(BOOL)a1;
- (void)_setIndicatorVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateIndicatorValueWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateIndicatorDisplayStyle;
- (void)_handleVideoPlayer:(id)a0 change:(id)a1;
- (void)_handleViewModel:(id)a0 change:(id)a1;
- (void)_flashTimeIndicator;
- (void)_cancelFlashTimeIndicator;
- (void)viewDidLoad;

@end
