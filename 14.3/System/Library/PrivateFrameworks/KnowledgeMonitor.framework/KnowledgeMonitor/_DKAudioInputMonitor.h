@class AVAudioSession;

@interface _DKAudioInputMonitor : _DKMonitor {
    AVAudioSession *_inputMonitor;
}

+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)eventStream;
+ (id)entitlement;

- (void)onAudioRouteChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;

@end
