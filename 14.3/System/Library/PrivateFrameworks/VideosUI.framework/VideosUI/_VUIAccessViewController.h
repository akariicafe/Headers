@class NSArray, NSDictionary, VUIAppSpinnerView, OBPrivacyLinkController, VUIAccessView_iOS, NSMutableArray;

@interface _VUIAccessViewController : UIViewController {
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    OBPrivacyLinkController *_privacyController;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    BOOL _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    BOOL _hasOptedIn;
    BOOL _shouldDenyOnCancel;
}

@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)_isHostedInRemoteViewService;

- (id)preferredFocusEnvironments;
- (id)init;
- (void).cxx_destruct;
- (void)_init;
- (void)_allow:(id)a0;
- (void)_handleMenuGesture:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setupNavigationBar;
- (void)viewDidLoad;
- (id)cappedTraitCollection;
- (id)_watchListAppIcon;
- (id)_imageForBundleID:(id)a0;
- (void)_fetchRemoteAppInfo;
- (void)_setupAccessViews;
- (void)_toggleLoadingScreen;
- (void)_completeWithStatus:(unsigned long long)a0;
- (void)_presentGenericErrorWithCompletion:(id /* block */)a0;
- (void)_disallow:(id)a0;
- (void)_handleSeeAllButton:(id)a0;
- (void)_handleNackButton:(id)a0;
- (id)initWithBundleIDs:(id)a0 channels:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end
