@class PXForYouGadgetPriorityManager, NSString, PXForYouBadgeManager, PXUbiquitousKeyValueStoreValueAccessor, NSDate;

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXNavigableForYouViewController, PXNavigableSharedAlbumActivityFeedHostViewController>

@property (class, readonly, nonatomic) PXUbiquitousKeyValueStoreValueAccessor *lastExitedDateAccessor;
@property (class, retain, nonatomic) NSDate *lastExitedForYouDate;

@property (retain, nonatomic) PXForYouBadgeManager *badgeManager;
@property (retain, nonatomic) PXForYouGadgetPriorityManager *priorityManager;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) BOOL rootGadgetControllerHasAppearedOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (id)px_navigationDestination;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)scrollAnimationIdentifier;
- (void)viewDidDisappear:(BOOL)a0;
- (void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)a0 configuration:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)configureSectionHeader:(id)a0;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigateToShowAllMemoriesFeedAnimated:(BOOL)a0;
- (id)initWithBadgeManager:(id)a0;
- (void)reloadContent;
- (void)_lastSeenBadgeDateChanged;
- (void)rootGadgetControllerWillAppear;
- (void)rootGadgetControllerDidDisappear;
- (void)_handleTapToRadar;
- (id)_suggestionDumpURL;
- (void)_userDidViewCloudFeedContent;
- (unsigned long long)_gadgetTypeForDestinationType:(long long)a0;
- (void)ppt_navigateToFirstSuggestedCMMAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(id /* block */)a0;
- (void)ppt_navigateToFirstInvitationCMM:(BOOL)a0 withCompleteHandler:(id /* block */)a1;
- (void)ppt_navigateToLatestMemoryWithWillPresentHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)ppt_navigateToContentSyndicationGridViewControllerWithCompleteHandler:(id /* block */)a0;

@end
