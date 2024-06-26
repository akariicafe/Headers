@class NCNotificationManagementViewPresenter, NCNotificationListTouchEaterManager, NSDate, NCNotificationListSectionHeaderView, NCMaterialDisplayingCaptureOnlyViewController, NCModalNavigationController, NCNotificationListView, NCModeManager, NCNotificationOptionsMenu, UIScrollView, NCNotificationRequest, NCNotificationViewController, NSHashTable, NSString, ATXDigestOnboardingSuggestionClient, ATXDigestOnboardingSuggestionLogging, ATXDigestOnboardingSuggestion, NSArray, NCNotificationMasterList, UIPanGestureRecognizer;
@protocol NCNotificationListCoalescingControlsHandler, NCNotificationStructuredListViewControllerDelegate, NCNotificationListSupplementaryViewsContaining, NCNotificationListComponent;

@interface NCNotificationStructuredListViewController : UIViewController <NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationOptionsMenuSettingsDelegate, NCModalNavigationControllerDelegate, NCDigestOnboardingNavigationControllerDelegate, ATXDigestOnboardingSuggestionClientObserver, NCModeManagerObserver, NCCreateContactNavigationViewControllerDelegate, NCSupplementaryViewPrototypeRecipeDelegate, _UIAlwaysOnEnvironmentObserver, NCLegibilitySettingsAdjusting>

@property (retain, nonatomic) NCNotificationMasterList *masterList;
@property (retain, nonatomic) NCNotificationListView *masterListView;
@property (retain, nonatomic) NCNotificationListTouchEaterManager *touchEaterManager;
@property (retain, nonatomic) NCNotificationManagementViewPresenter *managementViewPresenter;
@property (retain, nonatomic) NCNotificationOptionsMenu *optionsMenu;
@property (retain, nonatomic) NCModeManager *modeManager;
@property (retain, nonatomic) NCModalNavigationController *modalNavigationController;
@property (nonatomic) BOOL backgroundBlurred;
@property (retain, nonatomic) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook;
@property (weak, nonatomic) NCNotificationViewController *notificationViewControllerPresentingLongLook;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInForceTouchState;
@property (weak, nonatomic) id<NCNotificationListComponent> notificationListComponentPresentingOptionsMenu;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) ATXDigestOnboardingSuggestionClient *digestOnboardingSuggestionClient;
@property (retain, nonatomic) ATXDigestOnboardingSuggestion *digestOnboardingSuggestion;
@property (retain, nonatomic) ATXDigestOnboardingSuggestionLogging *digestOnboardingSuggestionLogging;
@property (retain, nonatomic) NSDate *digestOnboardingSuggestionPresentationTime;
@property (retain, nonatomic) NSArray *digestOnboardingLastBundleIdentifiersSelection;
@property (retain, nonatomic) NSArray *digestOnboardingLastScheduledDeliveryTimesSelection;
@property (retain, nonatomic) NCMaterialDisplayingCaptureOnlyViewController *captureOnlyMaterialViewController;
@property (retain, nonatomic) id<NCNotificationListSupplementaryViewsContaining> testRecipeSupplementaryViewsContainer;
@property (weak, nonatomic) id<NCNotificationStructuredListViewControllerDelegate> delegate;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSString *backgroundGroupNameBase;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveContentSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scrollViewVisibleContentLayoutOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insetMargins;
@property (readonly, nonatomic) double itemSpacing;
@property (readonly, nonatomic) BOOL hasVisibleContent;
@property (readonly, nonatomic) BOOL hasVisibleUrgentBreakthroughContent;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly, nonatomic, getter=isPresentingNotificationInLongLook) BOOL presentingNotificationInLongLook;
@property (readonly, nonatomic, getter=isScrollingListContent) BOOL scrollingListContent;
@property (readonly, nonatomic, getter=isOverlayFooterContentVisible) BOOL overlayFooterContentVisible;
@property (nonatomic) BOOL notificationListExpandsVisibleRegionOnSignificantScroll;
@property (nonatomic) BOOL showNotificationsInAlwaysOn;
@property (nonatomic, getter=isHomeAffordanceVisible) BOOL homeAffordanceVisible;
@property (weak, nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interpretsViewAsContent:(id)a0;
- (void)_contentSizeCategoryDidChange;
- (void)notificationMasterList:(id)a0 didUpdateOverlayFooterContentVisibility:(BOOL)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)notificationOptionsMenu:(id)a0 setScheduledDelivery:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementViewPresenter:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)a0;
- (id)notificationManagementViewPresenter:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (id)notificationManagementViewPresenterRequestsSystemSettings:(id)a0;
- (void)_didChangeDeepestUnambiguousResponder;
- (void)notificationListComponent:(id)a0 requestsClearingNotificationRequestsInSections:(id)a1;
- (void)removeNotificationRequest:(id)a0;
- (void)modeManager:(id)a0 didUpdateCurrentModeConfiguration:(id)a1 previousModeConfiguration:(id)a2;
- (BOOL)notificationMasterList:(id)a0 shouldFilterNotificationRequest:(id)a1;
- (id)notificationListComponent:(id)a0 notificationRequestForUUID:(id)a1;
- (void)notificationMasterList:(id)a0 scrollViewWillEndDragging:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)a0;
- (id)notificationListComponent:(id)a0 keyboardAssertionForGestureWindow:(id)a1;
- (void)notificationListComponent:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)migrateNotifications;
- (void)viewWillMoveToWindow:(id)a0;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (void)notificationListBaseComponent:(id)a0 willUpdateViewController:(id)a1;
- (void)_requestAuthenticationAndPerformBlock:(id /* block */)a0;
- (id)_logDescription;
- (void)removeContentObserver:(id)a0;
- (id)notificationListComponentRequestsCurrentModeConfiguration:(id)a0;
- (void)notificationListComponent:(id)a0 requestsAuthenticationAndPerformBlock:(id /* block */)a1;
- (void)notificationListComponent:(id)a0 requestsExecuteAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(BOOL)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (void)notificationListComponent:(id)a0 shouldFinishLongLookTransitionForNotificationRequest:(id)a1 trigger:(long long)a2 withCompletionBlock:(id /* block */)a3;
- (void)digestOnboardingNavigationControllerDidDeferSetup:(id)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)notificationMasterList:(id)a0 requestsPresentingFocusActivityPickerFromView:(id)a1;
- (id)notificationOptionsMenuRequestsSystemSettings:(id)a0;
- (id)notificationOptionsMenu:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (void)notificationListBaseComponent:(id)a0 didBeginUserInteractionWithViewController:(id)a1;
- (BOOL)notificationListComponent:(id)a0 shouldAllowInteractionsForNotificationRequest:(id)a1;
- (id)notificationSystemSettingsForNotificationListComponent:(id)a0;
- (void)listViewControllerPresentedByUserAction;
- (void)notificationListComponent:(id)a0 requestsPresentingManagementViewForNotificationRequest:(id)a1 managementViewType:(unsigned long long)a2 withPresentingView:(id)a3 completion:(id /* block */)a4;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)a0;
- (void)_presentNavigationControllerAndBeginModalInteraction:(id)a0 sender:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)notificationListBaseComponent:(id)a0 requestsModalPresentationOfNavigationController:(id)a1 sender:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)notificationListComponentChangedContent:(id)a0;
- (void)revealNotificationHistory:(BOOL)a0 animated:(BOOL)a1;
- (id)backgroundGroupNameBaseForNotificationListBaseComponent:(id)a0;
- (void)_setSystemScheduledDeliveryEnabled:(BOOL)a0 scheduledDeliveryTimes:(id)a1;
- (double)insetHorizontalMarginForNotificationListComponent:(id)a0;
- (id)notificationRequestWithNotificationIdentifier:(id)a0 sectionIdentifier:(id)a1;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)a0;
- (id)insertSupplementaryViewsContainerAtListPosition:(unsigned long long)a0 withDescription:(id)a1;
- (void)notificationListBaseComponent:(id)a0 didPresentCoalescingControlsHandler:(id)a1 inForceTouchState:(BOOL)a2;
- (BOOL)_canShowWhileLocked;
- (void)updateNotificationSystemSettings:(id)a0 previousSystemSettings:(id)a1;
- (void)_toggleDigestOnboardingSuggestionIfNecessary;
- (void)_setDigestOnboardingSuggestionVisible:(BOOL)a0;
- (void)notificationListComponent:(id)a0 setModeConfiguration:(id)a1;
- (BOOL)_isPresentingDigestOnboardingSuggestion;
- (void)notificationOptionsMenu:(id)a0 addSenderToContactsForNotificationRequest:(id)a1 withSectionIdentifier:(id)a2;
- (void)notificationMasterList:(id)a0 scrollViewDidScroll:(id)a1;
- (void)_didExitAlwaysOn;
- (void)insertNotificationRequest:(id)a0;
- (void)notificationManagementViewPresenter:(id)a0 setScheduledDelivery:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)_resetSwipeInteractionWithRevealedActionsAnimated:(BOOL)a0;
- (void)notificationListBaseComponent:(id)a0 didAddViewController:(id)a1;
- (void)modifyNotificationRequest:(id)a0;
- (void)notificationMasterList:(id)a0 requestsClearingFromIncomingSectionNotificationRequests:(id)a1;
- (void)notificationListBaseComponentDidSignificantUserInteraction:(id)a0;
- (void)notificationListComponent:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotificationRequest:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)notificationListBaseComponent:(id)a0 didUpdateViewController:(id)a1;
- (BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)a0;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (void)notificationListComponent:(id)a0 isPresentingLongLookForViewController:(id)a1;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;
- (void)notifyContentObservers;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)digestOnboardingNavigationController:(id)a0 didScheduleDigestDeliveryTimes:(id)a1 forAppBundleIdentifiers:(id)a2;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (id)_sectionSettingsForSectionIdentifier:(id)a0;
- (void)notificationOptionsMenu:(id)a0 setAllowsNotifications:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (BOOL)notificationListComponent:(id)a0 isClockNotificationRequest:(id)a1;
- (id)legibilitySettingsForNotificationListBaseComponent:(id)a0;
- (BOOL)isContentExtensionVisible:(id)a0;
- (void)notificationMasterListWillExpandNotificationListCount:(id)a0;
- (void)notificationListComponent:(id)a0 willDismissLongLookForCancelActionForViewController:(id)a1;
- (BOOL)notificationListComponentShouldAllowLongPressGesture:(id)a0;
- (void)notificationListComponent:(id)a0 didPresentSectionHeaderView:(id)a1 inForceTouchState:(BOOL)a2;
- (void)viewDidLoad;
- (id)containerViewForPreviewInteractionPresentedContentForNotificationListBaseComponent:(id)a0;
- (void)_setScheduledDeliveryEnabledForSectionIdentifier:(id)a0;
- (void)digestOnboardingSuggestionClient:(id)a0 didSuggestOnboarding:(id)a1;
- (void)notificationListComponent:(id)a0 acceptedSummaryOnboarding:(BOOL)a1;
- (id)notificationOptionsMenuRequestsCurrentModeConfiguration:(id)a0;
- (void)notificationOptionsMenu:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forNotificationRequest:(id)a3 withSectionIdentifier:(id)a4 threadIdentifier:(id)a5;
- (void)notificationListBaseComponent:(id)a0 didEndUserInteractionWithViewController:(id)a1;
- (void)notificationMasterList:(id)a0 scrollViewWillBeginDragging:(id)a1;
- (void)setOverrideNotificationListDisplayStyleSetting:(unsigned long long)a0 forReason:(id)a1 hideNotificationCount:(BOOL)a2;
- (void)notificationListBaseComponent:(id)a0 requestsClearingPresentables:(id)a1;
- (void)notificationListComponent:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)_scheduleDigestOnboardingSuggestion;
- (void)notificationOptionsMenuWillDismiss:(id)a0;
- (void)notificationListComponent:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)notificationListComponent:(id)a0 setNotificationSystemSettings:(id)a1;
- (void)notificationOptionsMenu:(id)a0 requestsClearingSectionWithIdentifier:(id)a1;
- (void)notificationManagementViewPresenter:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationListBaseComponent:(id)a0 didTransitionCoalescingControlsHandler:(id)a1 toClearState:(BOOL)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(id)a0;
- (void)notificationOptionsMenu:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationListBaseComponent:(id)a0 didTransitionActionsForSwipeInteraction:(id)a1 revealed:(BOOL)a2;
- (void)modalNavigationControllerDidDismiss:(id)a0;
- (void)notificationListComponent:(id)a0 requestsPresentingOptionsMenuForNotificationRequest:(id)a1 presentingViewProvider:(id /* block */)a2 optionsForSection:(BOOL)a3 completion:(id /* block */)a4;
- (id)init;
- (void)notificationManagementViewPresenter:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forNotificationRequest:(id)a3 withSectionIdentifier:(id)a4 threadIdentifier:(id)a5;
- (id)_notificationSystemSettings;
- (void)viewDidDisappear:(BOOL)a0;
- (id)notificationUsageTrackingStateForNotificationListComponent:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_presentOptionsMenuForNotificationRequest:(id)a0 withPresentingView:(id)a1 optionsForSection:(BOOL)a2;
- (void)notificationOptionsMenu:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationListBaseComponent:(id)a0 didRemoveViewController:(id)a1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)a0;
- (void)addContentObserver:(id)a0;
- (void)notificationManagementViewPresenter:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (id)notificationListComponent:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (BOOL)shouldHintDefaultActionForNotificationListBaseComponent:(id)a0;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)a0;
- (void)createContactNavigationControllerDidComplete:(id)a0;
- (void)notificationManagementViewPresenter:(id)a0 setAllowsNotifications:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (id)insertSupplementaryViewsContainerAtListPosition:(unsigned long long)a0 identifier:(id)a1 withDescription:(id)a2;
- (void)notificationListComponent:(id)a0 didTransitionSectionHeaderView:(id)a1 toClearState:(BOOL)a2;
- (id)notificationListComponent:(id)a0 containerViewProviderForExpandedContentForViewController:(id)a1;
- (void)notificationManagementViewPresenter:(id)a0 setDeliverQuietly:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (id)newCaptureOnlyMaterialViewController;
- (void)removeOverrideNotificationListDisplayStyleSettingForReason:(id)a0;
- (Class)notificationMasterListNotificationViewControllerClass:(id)a0;
- (void)digestOnboardingNavigationController:(id)a0 didChangeDeliveryTimesActiveSelection:(id)a1 appBundleIdentifiersActiveSelection:(id)a2;
- (BOOL)_shouldPresentDigestOnboardingSuggestion;
- (BOOL)_forwarNotificationRequestToLongLookIfNecessary:(id)a0;
- (void)notificationListComponent:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)notificationListBaseComponentRequestsClearingAll:(id)a0;
- (void).cxx_destruct;
- (void)_didChangeDeepestActionResponder;
- (void)notificationOptionsMenu:(id)a0 setModeConfiguration:(id)a1;
- (void)viewWillAppear:(BOOL)a0;

@end
