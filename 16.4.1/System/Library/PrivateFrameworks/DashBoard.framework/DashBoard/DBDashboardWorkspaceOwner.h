@class DBWorkspace, NSString, DBUserAlertServer, DBDashboardWorkspaceStateResolver, DBDashboardRootViewController, DBSiriViewController, NSMutableDictionary;
@protocol DBWorkspaceStateChangeSession, DBEnvironment, DBNotificationSuspending;

@interface DBDashboardWorkspaceOwner : NSObject <DBAppAlertPresenting, BSInvalidatable, DBEventHandling, DBWorkspaceOwner> {
    DBDashboardWorkspaceStateResolver *_stateResolver;
    BOOL _invalidated;
    DBDashboardRootViewController *_rootViewController;
    DBSiriViewController *_siriViewController;
    id<DBWorkspaceStateChangeSession> _currentSession;
    NSMutableDictionary *_entityIdentifierToViewControllerMap;
}

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (weak, nonatomic) DBWorkspace *workspace;
@property (weak, nonatomic) id<DBNotificationSuspending> notificationSuspender;
@property (weak, nonatomic) DBUserAlertServer *userAlertServer;
@property (readonly, nonatomic) NSString *activeBaseApplicationBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_updateViewControllerForEntity:(id)a0 changeItem:(id)a1 oldEntity:(id)a2 completion:(id /* block */)a3;
- (id)_existingViewControllerForEntity:(id)a0;
- (void)_handleSuspendedActivationForEntity:(id)a0 changeItem:(id)a1 completion:(id /* block */)a2;
- (void)_newViewControllerForEntity:(id)a0 changeItem:(id)a1 completion:(id /* block */)a2;
- (void)alertServer:(id)a0 wantsAppDismissalForViewController:(id)a1 bundleID:(id)a2;
- (void)alertServer:(id)a0 wantsAppPresentationForViewController:(id)a1 bundleID:(id)a2;
- (id)initWithStateResolver:(id)a0 environment:(id)a1 rootViewController:(id)a2 siriViewController:(id)a3;
- (void)session:(id)a0 handleStateChangeRequest:(id)a1;
- (unsigned long long)session:(id)a0 policyForRequest:(id)a1;
- (void)workspace:(id)a0 didBeginStateChangeSession:(id)a1;
- (void)workspace:(id)a0 didEndStateChangeSession:(id)a1;

@end
