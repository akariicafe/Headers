@class AVAudioSession;

@interface _DKAudioInputMonitor : _DKMonitor {
    AVAudioSession *_inputMonitor;
}

+ (id)eventStream;
+ (id)entitlement;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;

- (void)onAudioRouteChangeNotification:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
