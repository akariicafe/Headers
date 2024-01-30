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

- (void)waitForSessionInitialization;
- (void)_handleSessionChanged;
- (void)addSessionObserver:(id)a0;
- (void)_notifyDidConnectSession:(id)a0;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)_updateSession;
- (void)_handleConnectingTimeout;
- (void)_handleStartingWiredConnectionNotification;
- (void)_notifyDidDisconnectSession:(id)a0;
- (id)initAndWaitUntilSessionUpdated;
- (void)_startConnectingTimer;
- (void)_handleInCarNotification;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_stopConnectingTimer;
- (void)_handleAuthenticationSucceeded:(id)a0;
- (void)_handleEndpointActivated:(id)a0;
- (void)dealloc;
- (id)initForCarPlayShell;
- (void)_notifyDidUpdateSession:(id)a0;
- (void)_handleConfigurationUpdated;
- (void)_handleCarCapabilitiesUpdated;
- (void)removeSessionObserver:(id)a0;

@end
