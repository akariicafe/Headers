@class ADBannerView, AVPlayerItem, NSString, AVPlayer;
@protocol ADPlayerDelegate;

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate>

@property (nonatomic) BOOL playbackHasBegun;
@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (nonatomic) unsigned long long playbackState;
@property (retain, nonatomic) ADBannerView *videoAd;
@property (retain, nonatomic) id timeObserver;
@property (weak, nonatomic) id<ADPlayerDelegate> delegate;
@property (readonly, nonatomic) float playbackRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAction;
- (void)shutdown;
- (void)play;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bannerViewActionDidFinish:(id)a0;
- (void)bannerViewWillLoadAd:(id)a0;
- (BOOL)bannerViewActionShouldBegin:(id)a0 willLeaveApplication:(BOOL)a1;
- (void)pause;
- (void)bannerView:(id)a0 didFailToReceiveAdWithError:(id)a1;
- (void)applicationDidBecomeActive;
- (void)showAdTransparency;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)bannerViewDidLoadAd:(id)a0;
- (void)applicationWillResignActive;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)a0;
- (void)bannerViewShouldPauseMedia:(id)a0;
- (void)bannerViewShouldResumeMedia:(id)a0;
- (BOOL)prepareForPlayback;
- (id)_networkOptimalVideoURLForAd:(id)a0;
- (BOOL)_beginLoadingVideoFromURL:(id)a0;
- (void)playerItemDidPlayToEnd:(id)a0;
- (void)playerItemDidFailedToPlayToEnd:(id)a0;
- (void)playerItemEncounteredPlaybackStall:(id)a0;
- (void)playerDidStart;
- (void)playerDidPause;
- (BOOL)prepareForPlayackOfInterstitialWithURL:(id)a0;

@end
