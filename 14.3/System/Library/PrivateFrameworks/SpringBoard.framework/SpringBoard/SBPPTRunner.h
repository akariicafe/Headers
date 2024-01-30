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

- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (void)longLookDidDismissForNotificationViewController:(id)a0;
- (void)assistantWillAppear:(id)a0;
- (void)assistantDidAppear:(id)a0;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (void)prepareForControlCenterPPTHostState:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)runTestWithName:(id)a0 options:(id)a1;
- (void)_runFloatingDockBringupTestWithOptions:(id)a0;
- (void)_runFloatingDockDismissTestWithOptions:(id)a0;
- (void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)a0;
- (void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)a0;
- (void)_runNotificationClearLongLookTransitionTestWithOptions:(id)a0;
- (void)_runNotificationBannerTransitionTestWithOptions:(id)a0;
- (void)_runSiriTestWithName:(id)a0 options:(id)a1;
- (id)_operationToPresentCoverSheetForTestWithName:(id)a0;
- (id)_operationToDismissCoverSheetForTestWithName:(id)a0;
- (void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)a0 operation:(id)a1;
- (void)_runCoverSheetPresentTestWithOptions:(id)a0;
- (void)_runCoverSheetDismissTestWithOptions:(id)a0;
- (void)_runCoverSheetPresentOverSafariTestWithOptions:(id)a0;
- (void)_runCoverSheetDismissToSafariTestWithOptions:(id)a0;

@end
