@class BMSource, AVAudioSession;

@interface _DKAudioInputMonitor : _DKMonitor {
    BMSource *_source;
    AVAudioSession *_inputMonitor;
}

+ (id)eventStream;
+ (id)entitlement;
+ (id)_BMEventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;

- (void)deactivate;
- (void)onAudioRouteChangeNotification:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
