@class NSTimer;

@interface RMSSessionProxy : NSObject {
    NSTimer *_heartbeatTimer;
    double _sessionTimeout;
    double _lastHeartbeatTime;
    BOOL _isPaused;
}

@property (nonatomic) int sessionIdentifier;

- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)dealloc;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)beginHeartbeat;
- (void)endHeartbeat;
- (BOOL)sessionMatchesNotification:(id)a0;
- (void)heartbeatDidFail;
- (int)heartbeatTime;
- (void)_sendHeartbeat:(id)a0;

@end
