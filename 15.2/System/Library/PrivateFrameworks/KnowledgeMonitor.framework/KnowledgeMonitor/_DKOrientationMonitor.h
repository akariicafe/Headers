@class FBSDisplayLayoutMonitor;

@interface _DKOrientationMonitor : _DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithValue:(long long)a0;

- (void)start;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
