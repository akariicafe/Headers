@class NSString, PXForYouBadgeManager, PXUbiquitousKeyValueStoreValueAccessor, NSDate;

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXPreferencesObserver, PXNavigableSharedAlbumActivityFeedHostViewController>

@property (class, readonly, nonatomic) PXUbiquitousKeyValueStoreValueAccessor *lastExitedDateAccessor;
@property (class, retain, nonatomic) NSDate *lastExitedForYouDate;

@property (retain, nonatomic) PXForYouBadgeManager *badgeManager;
@property (nonatomic) BOOL rootGadgetControllerHasAppearedOnce;
@property (nonatomic) BOOL featuredContentAllowed;
@property (nonatomic) BOOL sharedLibrarySuggestionsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)a0;
- (void)preferencesDidChange;
- (void)configureSectionHeader:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)scrollAnimationIdentifier;
- (void)viewDidLoad;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (id)px_navigationDestination;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)reloadContent;
- (void)_updateNavigationBarItems;
- (unsigned long long)_gadgetTypeForDestinationType:(long long)a0;
- (void)_handleTapToRadar;
- (void)_reloadContentDueToSettingsChangeWithDelay;
- (id)_suggestionDumpURL;
- (void)_userDidViewForYouContent;
- (id)initWithBadgeManager:(id)a0;
- (void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)a0 configuration:(id /* block */)a1 completion:(id /* block */)a2;
- (void)navigationHelperDidNotFindValidGadget:(id)a0;
- (void)ppt_navigateToContentSyndicationGridViewControllerWithCompleteHandler:(id /* block */)a0;
- (void)ppt_navigateToFirstInvitationCMM:(BOOL)a0 withCompleteHandler:(id /* block */)a1;
- (void)ppt_navigateToFirstSuggestedCMMAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(id /* block */)a0;
- (void)ppt_navigateToLatestMemoryWithWillPresentHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)rootGadgetControllerDidDisappear;
- (void)rootGadgetControllerWillAppear;

@end
