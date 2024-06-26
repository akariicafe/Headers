@class NSString, OKPresentationViewController, OKNavigatorView, NSRecursiveLock, NSMutableDictionary, OFUIView, OKPresentationNavigator, NSMutableSet, OKPageViewController, NSMutableArray, OKAudioPlaylist;

@interface OKNavigatorViewControllerProxy : OFUIViewController <OKCollectionProxyDataSource, OKSettingsSupport, OKActionResponderPrivate, OKViewControllerAudioSupport, OKAudioPlaylistDelegate, OKPresentationReadinessPrivate, OKNavigatorViewControllerProxyExport, OKActionResponder, OKPresentationReadiness> {
    NSString *_willAppearActionScript;
    NSString *_didAppearActionScript;
    NSString *_willDisappearActionScript;
    NSString *_didDisappearActionScript;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSString *_navigationScript;
    NSMutableSet *_actionBindings;
    float _requiredDuckLevel;
    NSString *_playlistTrackID;
    double _audioVolume;
    BOOL _audioPlaylistLoops;
    BOOL _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
}

@property (nonatomic) OKPresentationViewController *presentationViewController;
@property (nonatomic) OKPageViewController *parentPageViewController;
@property (retain, nonatomic) OKPageViewController *currentPageViewController;
@property (nonatomic) BOOL audioPlaylistEnabled;
@property (retain, nonatomic) OKAudioPlaylist *audioPlaylist;
@property (retain, nonatomic) NSMutableDictionary *pageViewControllers;
@property (readonly, retain, nonatomic) OKNavigatorView *navigatorView;
@property (readonly, retain, nonatomic) OKPresentationNavigator *navigator;
@property (readonly, nonatomic) unsigned long long prepareMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) OFUIView *actionView;

+ (Class)viewClass;
+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay;
- (id)valueForUndefinedKey:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)commonInit;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)prepareForMode:(unsigned long long)a0;
- (id)name;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)instantPause;
- (void)layoutDidChange;
- (void)prepareForReload;
- (id)initWithNavigator:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)networkStatusDidChange:(long long)a0;
- (void)setNeedsApplySettings;
- (void)applySettingsIfNeeded;
- (void)resolutionDidChange;
- (void)applyLayoutSettings;
- (void)removeAllActionBindings;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (void)setNeedsPrepare;
- (void)prepareForRefresh;
- (void)instantResume;
- (void)updateWithMotionTiltRotationX:(double)a0 tiltRotationY:(double)a1 tiltRotationZ:(double)a2;
- (struct CGSize { double x0; double x1; })layoutFactor;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (id)allActionBindings;
- (id)dynamicsPushBehaviors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visiblePageRect;
- (void)applySettings;
- (void)navigatorWillAppear:(BOOL)a0;
- (void)navigatorDidAppear:(BOOL)a0;
- (void)_setAudioURLs:(id)a0;
- (void)_playAudioPlaylist;
- (void)cancelCouchPotatoPlayback;
- (void)notifyWhenBecomesReady:(id /* block */)a0;
- (void)removeAllReadyNotifications;
- (id)displayedPageViewControllers;
- (id)deepestDisplayedPageViewController;
- (void)navigateToItemAtKeyPath:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendAction:(id)a0 toTarget:(id)a1;
- (void)rewindAudioPlaylist;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isReady:(BOOL)a0;
- (double)readyProgress:(BOOL)a0;
- (void)setPlaybackAudioVolume:(double)a0;
- (void)beginFadingWithDuration:(double)a0;
- (double)requiredDuckLevel;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)endDucking;
- (BOOL)canPerformAction:(id)a0;
- (BOOL)performActionScript:(id)a0 withAction:(id)a1;
- (BOOL)interactivityEnabled;
- (void)addActionBinding:(id)a0 scope:(unsigned long long)a1;
- (void)removeActionBinding:(id)a0;
- (id)actionBindingForAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (id)cachedPageViewControllers;
- (struct CGSize { double x0; double x1; })parentLayoutFactor;
- (id)layoutSettingsKeys;
- (void)setSettingPrepareActionScript:(id)a0;
- (id)pageViewControllerForPageWithName:(id)a0 createIfNeeded:(BOOL)a1;
- (void)evaluateScript:(id)a0 withInfoDictionary:(id)a1 andCompletionBlock:(id /* block */)a2 forPageViewController:(id)a3 andWidgetView:(id)a4;
- (void)_stopAudioPlaylist;
- (void)gotoPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)endFading;
- (BOOL)supportsReadiness;
- (void)readinessDidChange:(BOOL)a0;
- (void)audioStartedPlayingWithAVAsset:(id)a0;
- (void)audioFinishedPlayingWithAVAsset:(id)a0;
- (void)becomeReady;
- (void)resignReady;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingFrame;
- (void)setSettingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingCanPerformActionScript:(id)a0;
- (void)setSettingWillAppearActionScript:(id)a0;
- (void)setSettingDidAppearActionScript:(id)a0;
- (void)setSettingWillDisappearActionScript:(id)a0;
- (void)setSettingDidDisappearActionScript:(id)a0;
- (void)setSettingNavigationScript:(id)a0;
- (void)setSettingAudioPlaylist:(id)a0;
- (float)settingAudioVolume;
- (void)setSettingAudioVolume:(float)a0;
- (void)setSettingAudioRequiredDuckLevel:(float)a0;
- (void)setSettingAudioPlaylistLoops:(BOOL)a0;
- (id)settingBackgroundColor;
- (void)setSettingBackgroundColor:(id)a0;
- (void)navigatorWillDisappear:(BOOL)a0;
- (void)navigatorDidDisappear:(BOOL)a0;
- (id)cachedPageViewControllerForPageWithNames:(id)a0;
- (void)uncachePageViewControllerForPageWithNames:(id)a0;
- (BOOL)isRootNavigator;

@end
