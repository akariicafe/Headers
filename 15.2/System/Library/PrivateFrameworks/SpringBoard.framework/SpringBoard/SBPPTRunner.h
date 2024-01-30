@class NSString;

@interface SBPPTRunner : NSObject <CCUIPPTHostDelegate, NCNotificationViewControllerObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isPageManagementTest:(id)a0;
+ (id)_operationToStashPIP;
+ (id)_operationToPutVideoInPIP;
+ (id)_operationToUnstashStashedPIP;
+ (id)_operationToRestoreVideoFromPIP;
+ (BOOL)isAppLibraryTest:(id)a0;

- (void)assistantWillAppear:(id)a0;
- (void)_runPIPBasicRestoreTestWithOptions:(id)a0;
- (void)_runCoverSheetDismissTestWithOptions:(id)a0;
- (void)_runSwipeToDeweyTest;
- (void)_runPiPManualUnstashTestWithOptions:(id)a0;
- (void)_runPiPAutoStashByEnteringSwitcherTestWithOptions:(id)a0;
- (void)_runPullToAppLibrarySearchTest;
- (void)_runPIPManualStashTestWithOptions:(id)a0;
- (void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)a0;
- (void)_runFloatingDockDismissTestWithOptions:(id)a0;
- (void)_runSiriTestWithName:(id)a0 options:(id)a1;
- (void)_runLibrarySearchTest;
- (id)_operationToPresentCoverSheetForTestWithName:(id)a0;
- (void)_runNotificationClearLongLookTransitionTestWithOptions:(id)a0;
- (void)_runPIPManualUnstashTestWithOptions:(id)a0;
- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (void)longLookDidDismissForNotificationViewController:(id)a0;
- (void)_runFloatingDockBringupTestWithOptions:(id)a0;
- (void)_runCoverSheetDismissToSafariTestWithOptions:(id)a0;
- (void)_runPageManagementPresentTestWithName:(id)a0 options:(id)a1;
- (void)_runSwipeFromDeweyTest;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (void)_runScrollWithinExpandedPodTest;
- (void)_runNotificationBannerTransitionTestWithOptions:(id)a0;
- (void)_runAppLibraryPadPresent;
- (void)_runPiPBasicRestoreTestWithOptions:(id)a0;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (void)_configureParams:(id)a0 forScrollView:(id)a1;
- (id)_operationToDismissCoverSheetForTestWithName:(id)a0;
- (void)_runPIPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)a0;
- (void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)a0 operation:(id)a1;
- (void)_runPiPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)a0;
- (void)_runAppLibraryTestWithName:(id)a0 options:(id)a1;
- (void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)a0;
- (void)_runPageManagementTestWithName:(id)a0 options:(id)a1;
- (BOOL)_runCoverSheetTestWithName:(id)a0 options:(id)a1;
- (void)_runPiPManualStashTestWithOptions:(id)a0;
- (void)_runCoverSheetPresentTestWithOptions:(id)a0;
- (void)_runScrollDeweyTest;
- (BOOL)runTestWithName:(id)a0 options:(id)a1;
- (void)_runCoverSheetPresentOverSafariTestWithOptions:(id)a0;
- (void)prepareForControlCenterPPTHostState:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_runPIPAutoStashByEnteringSwitcherTestWithOptions:(id)a0;
- (void)assistantDidAppear:(id)a0;

@end
