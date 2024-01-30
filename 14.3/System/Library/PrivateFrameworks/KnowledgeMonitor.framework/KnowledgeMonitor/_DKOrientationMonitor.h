@class FBSDisplayLayoutMonitor;

@interface _DKOrientationMonitor : _DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
}

+ (id)entitlements;
+ (id)_eventWithValue:(long long)a0;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;

@end
