@class BMSource, AVAudioSession;

@interface _DKAudioOutputMonitor : _DKMonitor {
    AVAudioSession *_outputMonitor;
    BMSource *_source;
}

+ (id)eventStream;
+ (id)_BMEventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)entitlements;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)contextValueForAudioOutputConnectionStatus:(BOOL)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;

- (void)deactivate;
- (void)onAudioRouteChangeNotification:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
