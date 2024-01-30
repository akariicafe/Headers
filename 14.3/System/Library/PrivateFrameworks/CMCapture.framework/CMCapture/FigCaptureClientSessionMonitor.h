@class NSString, NSArray, FigCaptureDisplayLayoutMonitor;

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    id /* block */ _applicationAndLayoutStateHandler;
    id /* block */ _interruptionHandler;
    struct { unsigned int val[8]; } _clientAuditToken;
    int _pid;
    NSString *_applicationID;
    BOOL _isForThirdPartyTorch;
    NSArray *_avconferenceClientApplicationIDs;
    BOOL _clientCanInheritApplicationState;
    int _pidToInheritAppStateFrom;
    unsigned int _bksApplicationState;
    BOOL _bksApplicationStateInitialized;
    NSString *_cachedApplicationIDToInheritAppStateFrom;
    NSString *_extensionHostApplicationID;
    struct OpaqueFigSimpleMutex { } *_stateChangeLock;
    struct OpaqueFigSimpleMutex { } *_sessionLock;
    int _applicationState;
    int _layoutState;
    BOOL _layoutStateInitialized;
    id _applicationStateChangeNotificationToken;
    id _interruptionStateChangeNotificationToken;
    BOOL _invalid;
    BOOL _haveExternalCMSession;
    int _clientType;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
}

@property (readonly, nonatomic) struct opaqueCMSession { } *session;
@property (readonly) NSString *applicationID;
@property (readonly) int applicationState;
@property (readonly) int clientType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_stringForApplicationState:(int)a0;
+ (void)stopPrewarmingMonitor;
+ (int)_applicationStateForClientLayoutState:(int)a0 clientType:(int)a1;
+ (id)_stringForClientType:(int)a0;
+ (void)startPrewarmingMonitorWithHandler:(id /* block */)a0;
+ (id)_stringForClientLayoutState:(int)a0;
+ (BOOL)_isSupportedExtensionClientType:(int)a0;
+ (int)_applicationStateForBKSApplicationState:(unsigned int)a0 clientType:(int)a1;
+ (id)_stringForBKSApplicationState:(unsigned int)a0;

- (id)_initWithClientAuditToken:(struct { unsigned int x0[8]; })a0 forThirdPartyTorch:(BOOL)a1 avconferenceClientApplicationIDs:(id)a2 applicationAndLayoutStateHandler:(id /* block */)a3 interruptionHandler:(id /* block */)a4;
- (BOOL)_isDisplayLayoutMonitoringRequiredForClient;
- (id)loggingPrefix;
- (void)_handleApplicationStateChange:(unsigned int)a0;
- (void)_updateApplicationState;
- (int)_registerCMSessionForObservation;
- (void)dealloc;
- (BOOL)_isCMSessionInterruptionObservingRequiredForClient;
- (BOOL)_isApplicationStateMonitoringRequiredForClient;
- (id)_resolveApplicationID;
- (void)_handleAudioInterruptionChange:(int)a0;
- (void)_deregisterAndReleaseCMSession;
- (id)initWithClientAuditToken:(struct { unsigned int x0[8]; })a0 forThirdPartyTorch:(BOOL)a1 applicationAndLayoutStateHandler:(id /* block */)a2 interruptionHandler:(id /* block */)a3;
- (int)observeSession:(struct opaqueCMSession { } *)a0;
- (void)layoutMonitor:(id)a0 didUpdateLayoutWithForegroundApps:(id)a1 obscuredApps:(id)a2 transitioningApps:(id)a3 pipApps:(id)a4;
- (id)initWithAVConferenceClientApplicationIDs:(id)a0 applicationAndLayoutStateHandler:(id /* block */)a1 interruptionHandler:(id /* block */)a2;
- (void)_setUpApplicationInfo;
- (int)_resolveApplicationState;
- (void)_handleCMSessionManagerNofification:(id)a0;
- (int)_createAndObserveCMSession;
- (void)invalidate;
- (void)_updateClientStateCondition:(void *)a0 newValue:(id)a1;

@end
