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

- (id)initWithCoverSheetViewController:(id)a0;
- (void)idleTimerDidWarn:(id)a0;
- (void)resetIdleTimerIfTopMost;
- (void).cxx_destruct;
- (void)idleTimerDidChange:(id)a0;
- (void)dealloc;
- (void)addIdleTimerDisabledAssertionReason:(id)a0;
- (void)conformsToCSEventHandling;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)idleTimerDidExpire:(id)a0;
- (void)idleTimerWillRefresh:(id)a0;
- (void)removeIdleTimerDisabledAssertionReason:(id)a0;
- (id)requestIdleTimerBehaviorForReason:(id)a0;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (id)dashBoardIdleTimerProvider:(id)a0 didProposeBehavior:(id)a1 reason:(id)a2;
- (void)idleTimerDidRefresh:(id)a0;

@end
