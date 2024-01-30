@class ARDaemonServiceListener, NSDictionary, NSTimer, ARServer;

@interface ARDaemon : NSObject {
    NSTimer *_heartbeatTimer;
    ARDaemonServiceListener *_listener;
    BOOL _anonymousListenerEnabled;
}

@property (readonly, nonatomic) ARServer *server;
@property (readonly, nonatomic) NSDictionary *listeners;

+ (id)anonymousListenerDaemon;

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)printInfo;
- (void)startup;
- (id)initWithAnonymousListenerEnabled:(BOOL)a0;
- (void)startWithReplayURL:(id)a0 onReplayStarted:(id /* block */)a1 onReplayStopped:(id /* block */)a2 onReplayFailed:(id /* block */)a3;
- (id)listenerEndPointForServiceNamed:(id)a0;

@end
