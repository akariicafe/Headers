@class NSString, PXForYouBadgeManager, NSDate, PXForYouGadgetPriorityManager;

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXNavigableForYouViewController, PXNavigableSharedAlbumActivityFeedHostViewController>

@property (class, retain, nonatomic) NSDate *lastExitedForYouDate;

@property (retain, nonatomic) PXForYouBadgeManager *badgeManager;
@property (retain, nonatomic) PXForYouGadgetPriorityManager *priorityManager;
@property (nonatomic) BOOL needsRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)px_navigationDestination;
- (long long)scrollAnimationIdentifier;
- (void)navigateToDetailsForMemoryWithLocalIdentifier:(id)a0 animated:(BOOL)a1;
- (id)navigateToShowAllMemoriesFeedAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithBadgeManager:(id)a0;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (BOOL)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)_lastSeenBadgeDateChanged;
- (void)rootGadgetControllerWillAppear;
- (void)rootGadgetControllerDidDisappear;
- (void)_handleTapToRadar;
- (id)_suggestionDumpURL;
- (void)_userDidViewCloudFeedContent;
- (void)ppt_navigateToFirstSuggestedCMMAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(id /* block */)a0;
- (void)ppt_navigateToFirstInvitationCMM:(BOOL)a0 withCompleteHandler:(id /* block */)a1;
- (void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)a0 configuration:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureSectionHeader:(id)a0;
- (void)reloadContent;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)viewDidLoad;

@end
