@class NSString, STWebRemoteViewController, NSURL;
@protocol STWebService;

@interface STWebpageController : UIViewController {
    long long _currentUsageState;
}

@property (retain) STWebRemoteViewController *remoteViewController;
@property (readonly) id<STWebService> serviceProxy;
@property (nonatomic) long long currentUsageState;
@property (readonly) long long defaultUsageState;
@property BOOL URLIsVisibleInForeground;
@property (readonly) BOOL URLIsPlayingVideoPictureInPicture;
@property BOOL URLIsBlocked;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL suppressUsageRecording;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) BOOL URLIsPlayingVideo;
@property (nonatomic) BOOL URLIsPictureInPicture;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_startReportingWebUsage;
- (void)_willStartPictureInPicture:(id)a0;
- (void)_didStopPictureInPicture:(id)a0;
- (void)_didChangePlaybackState:(id)a0;
- (void)_setURL:(id)a0 bundleIdentifier:(id)a1 usageState:(long long)a2 errorHandler:(id /* block */)a3;
- (void)_URLIsBlockedDidChangeFrom:(id)a0 to:(id)a1;
- (void)_delayedSetURLIsBlocked:(id)a0;
- (void)_changeUsageState:(long long)a0 errorHandler:(id /* block */)a1;
- (BOOL)setBundleIdentifier:(id)a0 error:(id *)a1;

@end
