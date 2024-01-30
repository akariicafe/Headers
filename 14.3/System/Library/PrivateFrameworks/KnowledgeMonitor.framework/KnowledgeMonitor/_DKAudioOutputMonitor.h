@class AVAudioSession;

@interface _DKAudioOutputMonitor : _DKMonitor {
    AVAudioSession *_outputMonitor;
}

+ (id)entitlements;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)contextValueForAudioOutputConnectionStatus:(BOOL)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)eventStream;

- (void)onAudioRouteChangeNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;

@end
