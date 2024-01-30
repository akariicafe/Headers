@class NSString, SBDashBoardIdleTimerProvider, CSCoverSheetViewController;
@protocol SBIdleTimerCoordinating;

@interface SBDashBoardIdleTimerController : NSObject <CSExternalEventHandling, SBDashBoardIdleTimerProviderDelegate, CSIdleTimerControlling, SBIdleTimerProviding, SBLockScreenIdleTimerControlling> {
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardIdleTimerProvider *_dashBoardIdleTimerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;

- (void)idleTimerDidWarn:(id)a0;
- (id)initWithCoverSheetViewController:(id)a0;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)idleTimerDidExpire:(id)a0;
- (void)idleTimerDidRefresh:(id)a0;
- (id)requestIdleTimerBehaviorForReason:(id)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (id)dashBoardIdleTimerProvider:(id)a0 didProposeBehavior:(id)a1 reason:(id)a2;
- (void)removeIdleTimerDisabledAssertionReason:(id)a0;
- (void).cxx_destruct;
- (void)idleTimerWillRefresh:(id)a0;
- (void)resetIdleTimerIfTopMost;
- (void)addIdleTimerDisabledAssertionReason:(id)a0;
- (void)conformsToCSEventHandling;
- (void)dealloc;
- (void)idleTimerDidChange:(id)a0;

@end
