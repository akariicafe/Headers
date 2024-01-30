@class UMUser, NSString, NSDate, SBMainDisplayPolicyAggregator, LKLogoutSupport, NSDictionary, UMUserManager, SBLogoutProgressTransientOverlayViewController, NSMutableArray, NSMutableSet, UMUserSwitchBlockingTask;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder> {
    UMUserManager *_userManager;
    UMUser *_lazy_user;
    SBLogoutProgressTransientOverlayViewController *_progressTransientOverlayViewController;
    NSMutableArray *_displayApplications;
    NSMutableSet *_terminatingApplications;
    UMUserSwitchBlockingTask *_terminateApplicationsTask;
    NSDate *_terminateApplicationsStartDate;
    NSDictionary *_debugBlockingTasks;
    LKLogoutSupport *_logoutSupport;
}

@property (nonatomic, getter=isLoggingOut) BOOL loggingOut;
@property (retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator;
@property (readonly, retain, nonatomic) UMUser *user;
@property (readonly, nonatomic, getter=isLoginSession) BOOL loginSession;
@property (readonly, nonatomic) BOOL isMultiUserSupported;
@property (readonly, nonatomic) BOOL canLogout;
@property (readonly, nonatomic) long long sessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_noteApplicationDidExit:(id)a0;
- (void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)a0;
- (void)_readyToSwitchToUser:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_displayProgressTransientOverlayIfNeeded;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (void)_noteApplicationDidExitFromNotification:(id)a0;
- (void)userSwitchBlockingTasksDidUpdate:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_massageApplicationListForDisplay:(id)a0;
- (void)willSwitchToUser:(id)a0;
- (void)readyToSwitchToLoginSession:(id)a0;
- (id)_initWithUserManager:(id)a0;
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)a0;
- (void)logoutWithLogoutSupport:(id)a0 completion:(id /* block */)a1;
- (void)readyToSwitchToUser:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_evaluateRunningApplications;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)a0;
- (struct CGPoint { double x0; double x1; })_portraitOrientedProgressLocationForOrientation:(long long)a0;
- (void)logout;
- (id)policyAggregator;
- (void)disableCurrentUser;

@end
