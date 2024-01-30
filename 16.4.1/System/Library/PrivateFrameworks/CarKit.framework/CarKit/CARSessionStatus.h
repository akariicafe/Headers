@class CARSessionChangedNotificationConverter, CARSession, CARObserverHashTable, NSObject;
@protocol OS_dispatch_source, CARSessionObserving;

@interface CARSessionStatus : NSObject

@property (retain, nonatomic) CARSession *session;
@property (retain, nonatomic) CARSessionChangedNotificationConverter *notificationConverter;
@property (retain, nonatomic) CARObserverHashTable *sessionObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectingTimer;
@property (nonatomic) unsigned long long timeoutInterval;
@property (readonly, nonatomic) BOOL clientIsCarPlayShell;
@property (readonly, nonatomic) CARSession *currentSession;
@property (weak, nonatomic) id<CARSessionObserving> sessionObserver;

+ (id)sessionUpdatesQueue;

- (void)_handleEndpointActivated:(id)a0;
- (void)_notifyDidDisconnectSession:(id)a0;
- (void)addSessionObserver:(id)a0;
- (void)waitForSessionInitialization;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)_handleAuthenticationSucceeded:(id)a0;
- (void)_handleConnectingTimeout;
- (void)_startConnectingTimer;
- (void)_handleSessionChanged;
- (void)_handleCarCapabilitiesUpdated;
- (id)initAndWaitUntilSessionUpdated;
- (void)_notifyDidUpdateSession:(id)a0;
- (void)_handleInCarNotification;
- (void)dealloc;
- (id)initForCarPlayShell;
- (void)removeSessionObserver:(id)a0;
- (void)_handleStartingWiredConnectionNotification;
- (void)_stopConnectingTimer;
- (id)init;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)_updateSession;
- (void)_handleConfigurationUpdated;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_notifyDidConnectSession:(id)a0;

@end
