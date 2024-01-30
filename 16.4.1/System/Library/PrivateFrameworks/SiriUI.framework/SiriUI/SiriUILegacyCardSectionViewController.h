@class NSString, SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyCardSectionViewController : CRKCardSectionViewController <SiriUISnippetViewControllerDelegatePrivate, SiriUISnippetViewControllerDelegate>

@property (retain, nonatomic) SiriUICardSectionView *view;
@property (weak, nonatomic) SiriUISnippetViewController *containingSnippetViewController;
@property (readonly, nonatomic) SiriUISnippetViewController *backingSnippetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardSectionClasses;

- (void)_updateContentSize;
- (BOOL)_canShowWhileLocked;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_interaction;
- (id)_createReusableViewIfNeededWithClass:(Class)a0;
- (void)_loadCardSectionView;
- (BOOL)_shouldAttemptToConnectToRemoteViewController;
- (id)additionalSpeechInterpretationsForSiriViewController:(id)a0;
- (double)boundingWidthForSnippetViewController:(id)a0;
- (void)cancelRequestForSiriSnippetViewController:(id)a0;
- (void)cancelSpeakingForSiriViewController:(id)a0;
- (id)localeForSiriViewController:(id)a0;
- (id)persistentDataStoreForSiriViewController:(id)a0;
- (void)removeSiriViewController:(id)a0;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)a0;
- (id)siriEnabledAppListForSiriViewController:(id)a0;
- (void)siriSnippetViewController:(id)a0 didDismissViewController:(id)a1;
- (void)siriSnippetViewController:(id)a0 didPresentViewController:(id)a1;
- (void)siriSnippetViewController:(id)a0 didRequestKeyboardWithVisibility:(BOOL)a1;
- (void)siriSnippetViewController:(id)a0 didShowGuideStartDate:(id)a1 endDate:(id)a2;
- (void)siriSnippetViewController:(id)a0 pushSirilandSnippets:(id)a1;
- (void)siriSnippetViewController:(id)a0 requestPasscodeUnlockWithCompletion:(id /* block */)a1;
- (void)siriSnippetViewController:(id)a0 setStatusBarHidden:(BOOL)a1 animated:(BOOL)a2;
- (void)siriSnippetViewController:(id)a0 setStatusBarHidden:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)siriSnippetViewController:(id)a0 setStatusViewHidden:(BOOL)a1;
- (void)siriSnippetViewController:(id)a0 shouldPresentPicker:(id)a1 completion:(id /* block */)a2;
- (void)siriSnippetViewController:(id)a0 willDismissViewController:(id)a1;
- (void)siriSnippetViewController:(id)a0 willPresentViewController:(id)a1;
- (BOOL)siriSnippetViewControllerIsVisible:(id)a0;
- (void)siriSnippetViewControllerViewDidLoad:(id)a0;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)a0;
- (void)siriViewController:(id)a0 addSelectionResponse:(id)a1;
- (void)siriViewController:(id)a0 didHideVibrantView:(id)a1;
- (id)siriViewController:(id)a0 disambiguationItemForListItem:(id)a1 disambiguationKey:(id)a2;
- (id)siriViewController:(id)a0 domainObjectForIdentifier:(id)a1;
- (id)siriViewController:(id)a0 filteredDisambiguationListItems:(id)a1;
- (id)siriViewController:(id)a0 listItemToPickInAutodisambiguationForListItems:(id)a1;
- (void)siriViewController:(id)a0 openURL:(id)a1 completion:(id /* block */)a2;
- (void)siriViewController:(id)a0 performAceCommands:(id)a1;
- (void)siriViewController:(id)a0 performAceCommands:(id)a1 completion:(id /* block */)a2;
- (void)siriViewController:(id)a0 setContentOffset:(double)a1;
- (void)siriViewController:(id)a0 setDomainObject:(id)a1 forIdentifier:(id)a2;
- (void)siriViewController:(id)a0 speakText:(id)a1 completion:(id /* block */)a2;
- (void)siriViewController:(id)a0 startCorrectedSpeechRequestWithText:(id)a1 correctionIdentifier:(id)a2 userSelectionResults:(id)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })siriViewControllerBackgroundInsets:(id)a0;
- (void)siriViewControllerDidEndEditing:(id)a0;
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)a0;
- (double)siriViewControllerExpectedWidth:(id)a0;
- (void)siriViewControllerHeightDidChange:(id)a0;
- (void)siriViewControllerHeightDidChange:(id)a0 pinTopOfSnippet:(BOOL)a1;
- (void)siriViewControllerRequestTearDownEditingViewController:(id)a0;
- (BOOL)siriViewControllerShouldPreventUserInteraction:(id)a0;
- (void)siriViewControllerViewDidAppear:(id)a0 isTopLevelViewController:(BOOL)a1;
- (void)siriViewControllerViewDidDisappear:(id)a0 isTopLevelViewController:(BOOL)a1;
- (struct CGSize { double x0; double x1; })siriViewControllerVisibleContentArea:(id)a0;
- (void)siriViewControllerWillBeginEditing:(id)a0;
- (double)statusBarHeightForSiriViewController:(id)a0;
- (id)updatedUserUtteranceForSiriViewController:(id)a0;

@end
