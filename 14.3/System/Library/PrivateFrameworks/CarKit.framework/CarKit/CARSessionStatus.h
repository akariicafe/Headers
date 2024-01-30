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

- (void)_notifyDidUpdateSession:(id)a0;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)a0;
- (id)init;
- (void)_handleInCarNotification;
- (void).cxx_destruct;
- (void)_stopConnectingTimer;
- (void)_startConnectingTimer;
- (void)dealloc;
- (void)_handleSessionChanged;
- (void)addSessionObserver:(id)a0;
- (void)_updateSession;
- (void)_handleCarCapabilitiesUpdated;
- (void)removeSessionObserver:(id)a0;
- (void)_notifyDidDisconnectSession:(id)a0;
- (void)waitForSessionInitialization;
- (void)_handleConfigurationUpdated;
- (id)initAndWaitUntilSessionUpdated;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)a0;
- (id)initForCarPlayShell;
- (void)_handleAuthenticationSucceeded:(id)a0;
- (void)_notifyDidConnectSession:(id)a0;
- (void)_handleConnectingTimeout;

@end
