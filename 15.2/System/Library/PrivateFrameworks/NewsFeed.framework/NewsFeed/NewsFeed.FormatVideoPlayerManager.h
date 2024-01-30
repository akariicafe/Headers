@interface NewsFeed.FormatVideoPlayerManager : NSObject <SVVideoPlayerViewControllerDelegate, SVVideoPlayerViewControllerDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ offscreenVisibility;
    void /* unknown type, empty encoding */ partialVisibility;
    void /* unknown type, empty encoding */ onscreenVisibility;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ pictureInPictureState;
    void /* unknown type, empty encoding */ visibilityPercentage;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ videoAdProviderFactory;
    void /* unknown type, empty encoding */ volumeProvider;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ adJoural;
    void /* unknown type, empty encoding */ sceneProvider;
}

- (void)startPictureInPictureIfPossible;
- (void)videoPlayerViewControllerWillStartPictureInPicture:(id)a0;
- (void)videoPlayerViewControllerDidStopPictureInPicture:(id)a0;
- (void)videoPlayerViewController:(id)a0 startedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewController:(id)a0 resumedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)videoPlayerViewControllerDidExitFullscreen:(id)a0;
- (id)videoAdForVideoPlayerViewController:(id)a0;
- (id)videoForVideoPlayerViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
