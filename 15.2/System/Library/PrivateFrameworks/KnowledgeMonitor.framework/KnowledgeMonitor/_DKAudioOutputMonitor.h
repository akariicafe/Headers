@class AVAudioSession;

@interface _DKAudioOutputMonitor : _DKMonitor {
    AVAudioSession *_outputMonitor;
}

+ (id)eventStream;
+ (id)contextValueForAudioOutputConnectionStatus:(BOOL)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)entitlements;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;

- (void)onAudioRouteChangeNotification:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
