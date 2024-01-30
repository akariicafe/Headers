@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SKInGameAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _internalGameInProgress;
    NSString *_sessionID;
}

@property (nonatomic, getter=isGameSessionInProgress) BOOL gameSessionInProgress;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopSessionTimerAndNotifications;
- (void)_gamePlayDidBegin;
- (void)_gamePlayDidEndWithReason:(long long)a0;
- (void)_startSessionWithID:(id)a0;
- (void)_startObservingLifecycleNotifications;
- (void)_stopObservingLifecycleNotifications;
- (void)_receivedAppWillResignActiveNotification;
- (void)_recievedAppWillTerminateNotification;

@end
