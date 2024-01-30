@class SKUIJSAppleAccount, NSString, SKUIJSRestrictions, SKUIClientContext;

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore> {
    SKUIClientContext *_clientContext;
    BOOL _isAppPreview;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long applicationIconBadgeNumber;
@property (readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;
@property (readonly, nonatomic) SKUIJSRestrictions *restrictions;
@property (readonly, copy, nonatomic) NSString *hostApp;
@property (readonly, nonatomic) BOOL isAppPreview;

- (void)log:(id)a0;
- (void)buy:(id)a0;
- (void)download:(id)a0;
- (void)exit:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)itemStateCenterMediaLibrariesDidChange:(id)a0;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1;
- (void)_purchaseRequestDidSucceedNotification:(id)a0;
- (void)_finishPurchaseForOptions:(id)a0 purchaseResponse:(id)a1;
- (void)_finishSoftwarePurchaseForOptions:(id)a0 purchaseResponse:(id)a1;
- (id)_rentalInfoFromMediaItems:(id)a0;
- (id)_millisecondsFromTimeInterval:(double)a0;
- (void)getAdminStatus:(id)a0 :(id)a1;
- (void)approveInPerson:(id)a0 :(id)a1;
- (BOOL)areVideosCloudPurchasesEnabled;
- (void)attemptLocalAskToBuyApproval:(id)a0;
- (void)downloadExistsFor:(id)a0 :(id)a1;
- (void)findApps:(id)a0 :(id)a1 :(id)a2;
- (void)findLibraryItems:(id)a0 :(id)a1 :(id)a2;
- (void)findOwnedItems:(id)a0 :(id)a1;
- (void)findToggleStateForItem:(id)a0 :(id)a1;
- (void)clearToggleStateItems;
- (void)getBookSample:(id)a0;
- (void)getProfilePermissions:(id)a0 :(id)a1;
- (void)isInstalledApp:(id)a0 :(id)a1;
- (void)isRemovedSystemApp:(id)a0 :(id)a1;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(id)a0;
- (void)headsUp:(id)a0 :(id)a1;
- (void)resetStateForActiveDocument;
- (BOOL)resourceExists:(id)a0;
- (void)setPreviewOverlay:(id)a0 :(id)a1;
- (void)restoreRemovedSystemApp:(id)a0 :(id)a1;
- (void)updateToggleStateForItem:(id)a0 toggled:(BOOL)a1 :(id)a2;
- (void)loadRentals:(id)a0;
- (void)loadRental:(id)a0 :(id)a1;
- (void)fetchTemplates:(id)a0 :(id)a1;
- (id)documentSizeForNavigationDocument:(id)a0;
- (void)fetchMSOProviderStatus:(id)a0;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendOnNavigationStackWillPop:(BOOL)a0;
- (void)sendOnPageResponseWithDocument:(id)a0 data:(id)a1 URLResponse:(id)a2 performanceMetrics:(id)a3;
- (BOOL)sendOnXEventWithDictionary:(id)a0;
- (BOOL)sendAppPreviewStateChanged:(BOOL)a0;
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)sendOnShowPageEventType:(id)a0 data:(id)a1;
- (void)_displayWifiConnectionRequiredAlert;

@end
