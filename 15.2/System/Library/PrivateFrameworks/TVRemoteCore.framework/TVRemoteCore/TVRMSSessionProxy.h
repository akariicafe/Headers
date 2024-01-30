@class NSTimer;

@interface TVRMSSessionProxy : NSObject {
    NSTimer *_heartbeatTimer;
    double _sessionTimeout;
    double _lastHeartbeatTime;
    BOOL _isPaused;
}

@property (nonatomic) int sessionIdentifier;

- (void)_applicationDidBecomeActive:(id)a0;
- (id)initWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)dealloc;
- (void)beginHeartbeat;
- (void)endHeartbeat;
- (BOOL)sessionMatchesNotification:(id)a0;
- (void)heartbeatDidFail;
- (int)heartbeatTime;
- (void)_sendHeartbeat:(id)a0;

@end
