@class NSTimer;

@interface TVRMSSessionProxy : NSObject {
    NSTimer *_heartbeatTimer;
    double _sessionTimeout;
    double _lastHeartbeatTime;
    BOOL _isPaused;
}

@property (nonatomic) int sessionIdentifier;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (id)initWithTimeout:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_sendHeartbeat:(id)a0;
- (void)beginHeartbeat;
- (void)endHeartbeat;
- (void)heartbeatDidFail;
- (int)heartbeatTime;
- (BOOL)sessionMatchesNotification:(id)a0;

@end
