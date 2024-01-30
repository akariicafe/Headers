@class FBSDisplayLayoutMonitor, BMSource;

@interface _DKOrientationMonitor : _DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
    BMSource *_source;
}

+ (id)eventStream;
+ (id)_BMEventWithValue:(long long)a0;
+ (id)_eventWithValue:(long long)a0;
+ (id)entitlements;

- (void)deactivate;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
