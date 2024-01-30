@class CPSClipMetadata, NSString, NSTimer, CPSClipLoadingView, CPSWebClip, CPSPromise, CPSBannerContainerView, CPSSessionProxy, CPSAppAttributionBanner, CPSAppClipRecord;

@interface CPSClipOverlayViewController : UIViewController <CPSSessionProxyDelegate> {
    NSTimer *_automaticBannerDismissTimer;
    BOOL _attemptToShowBannerOnceSessionProxyIsResolved;
    CPSAppAttributionBanner *_banner;
    CPSBannerContainerView *_bannerContainer;
    CPSAppClipRecord *_clipRecord;
    BOOL _displayedOverPlaceholder;
    CPSClipLoadingView *_loadingView;
    CPSClipMetadata *_placeholderClipMetadata;
    long long _sceneActivationState;
    CPSSessionProxy *_sessionProxy;
    BOOL _showingDemoProgress;
    double _initialAppearanceTime;
    CPSWebClip *_webClip;
    CPSPromise *_sessionPromise;
    BOOL _clipNeedsUpdate;
}

@property (nonatomic) BOOL usesMockData;
@property (nonatomic) long long appAttributionBannerPolicy;
@property (copy, nonatomic) NSString *webClipID;
@property (copy, nonatomic) NSString *referrerBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setDisplayedOverPlaceholder:(BOOL)a0 animated:(BOOL)a1;
- (void)setSceneActivationState:(long long)a0 animated:(BOOL)a1;
- (void)setClipNeedsUpdateToLatestVersion;
- (id)initWithAppClipBundleID:(id)a0 webClipID:(id)a1;
- (void)proxyDidUpdateMetadata:(id)a0;
- (void)proxyDidChangeProgress:(id)a0;
- (void)proxy:(id)a0 didRetrieveHeroImage:(id)a1;
- (void)proxy:(id)a0 didFinishLoadingWithError:(id)a1;
- (void)proxyRemoteServiceDidCrash:(id)a0;
- (id)_initWithAppClipBundleID:(id)a0;
- (void)_loadClipRecordUsingBundleID;
- (void)_setClipSessionProxy:(id)a0;
- (void)_scheduleBannerDismissTimerIfNeeded;
- (void)_didTapBanner;
- (void)_updateBanner;
- (void)_loadClipMetadataUsingPlaceholderWebClipID;
- (void)_presentLoadingViewAnimated:(BOOL)a0;
- (void)_dismissLoadingViewAnimated:(BOOL)a0;
- (void)_setPlaceholderClipMetadata:(id)a0;
- (void)setDisplayedOverPlaceholder:(BOOL)a0 forWebClipID:(id)a1 animated:(BOOL)a2;
- (void)_setBannerHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_setClipRecord:(id)a0;
- (void)_updateBannerLabels;
- (void)_setUpNewSessionProxy;
- (void)_updateLoadingView;
- (void)_showFailedLoadingStateAndReloadMetadata:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithAppClipBundleID:(id)a0;
- (id)initWithAppClipRecord:(id)a0;
- (void)setDisplayedOverPlaceholder:(BOOL)a0 usingClipMetadata:(id)a1 animated:(BOOL)a2;

@end
