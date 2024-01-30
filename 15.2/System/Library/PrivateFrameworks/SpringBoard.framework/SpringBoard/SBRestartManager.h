@class FBSystemService, SBRestartTransitionRequest, NSMutableSet, SBInitialRestartState, BSTransaction, SBStartupTransitionController;
@protocol SBStartupTransition, SBRestartManagerDelegate, SBRestartManagerWorkspaceDataSource;

@interface SBRestartManager : NSObject {
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionController *_startupController;
    id<SBRestartManagerWorkspaceDataSource> _workspaceDataSource;
    BOOL _isShuttingDown;
    BOOL _isRestartImminent;
    NSMutableSet *_pendingExternallyControlledRestartReasons;
    FBSystemService *_systemService;
}

@property (weak, nonatomic) id<SBRestartManagerDelegate> delegate;
@property (readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition;
@property (readonly, nonatomic) SBRestartTransitionRequest *pendingRestartTransitionRequest;
@property (readonly, nonatomic, getter=isPendingExit) BOOL pendingExit;

- (id)startupTransition;
- (void)shutdownWithContext:(id)a0;
- (id)_initWithWorkspaceDataSource:(id)a0 initialRestartState:(id)a1 startupController:(id)a2 systemService:(id)a3;
- (void)_removePendingExternallyControlledRestartReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_isPendingExitIncludingExternallyControlledReasons:(BOOL)a0;
- (void)initializeAndRunStartupTransition:(id /* block */)a0;
- (void)_addPendingExternallyControlledRestartReason:(id)a0;
- (id)initWithWorkspaceDataSource:(id)a0 initialRestartState:(id)a1;
- (id)succinctDescription;
- (id)description;
- (void)_restartWithTransitionRequest:(id)a0;
- (void)_shutdownWithOptions:(unsigned long long)a0 byUser:(BOOL)a1 description:(id)a2;
- (void)rebootWithContext:(id)a0;
- (void)_killAllAppsForPendingExitWithReason:(long long)a0 description:(id)a1 expiration:(double)a2 completion:(id /* block */)a3;
- (void)_exitIsImminent;
- (void)_postShutdownNotification;
- (void)_persistStartupTransitionContextFromRebootContext:(id)a0;
- (void).cxx_destruct;
- (void)rebootForReason:(id)a0;
- (id)init;
- (void)shutdownForReason:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_reallyRestartWithTransitionRequest:(id)a0;
- (void)_persistStartupTransitionContextFromShutdownContext:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_doRestartForTransition:(int)a0;
- (void)___waitForeverForRunningBoardKill;
- (void)restartWithTransitionRequest:(id)a0;
- (void)_persistStartupTransitionContextFromRestartRequest:(id)a0;

@end
