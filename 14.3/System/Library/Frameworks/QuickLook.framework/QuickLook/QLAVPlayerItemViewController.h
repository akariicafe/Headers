@class AVPlayerViewController, NSString, QLOverlayPlayButton, AVPlayer;

@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate> {
    QLOverlayPlayButton *_playButton;
    AVPlayerViewController *_playerViewController;
    BOOL _fullScreen;
    BOOL _mediaWasPausedOnResignActive;
    AVPlayer *_player;
    struct CGSize { double width; double height; } _imageSize;
    BOOL _isAudioOnly;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })imageSize;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)play;
- (void).cxx_destruct;
- (void)enterFullScreen:(BOOL)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canEnterFullScreen;
- (void)pause;
- (void)previewDidDisappear:(BOOL)a0;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)hostApplicationDidBecomeActive;
- (BOOL)playerViewController:(id)a0 shouldExitFullScreenWithReason:(long long)a1;

@end
