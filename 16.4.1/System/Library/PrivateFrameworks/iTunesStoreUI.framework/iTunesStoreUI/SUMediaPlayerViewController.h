@class AVPlayerViewController, SUMediaPlayerItem, NSString, UIView, NSMutableArray, SUClientInterface;

@interface SUMediaPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, ISOperationDelegate> {
    UIView *_backgroundContainerView;
    NSMutableArray *_operations;
    long long _playerState;
}

@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_URLIsITunesU:(id)a0;
+ (void)_sendPingRequestsForURLs:(id)a0 URLBagKey:(id)a1 playerItem:(id)a2;
+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)a0;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)a0;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)_enqueueOperation:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)operationFinished:(id)a0;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (id)_backgroundContainerView;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (void)_dequeueOperation:(id)a0;
- (void)_loadBackgroundImage;
- (void)_playbackFinishedNotification:(id)a0;
- (void)_prepareMediaItem;
- (void)_setIsActivePlayer:(BOOL)a0;
- (void)_showBackgroundImage:(id)a0;
- (id)copyScriptViewController;
- (id)initWithMediaPlayerItem:(id)a0;

@end
