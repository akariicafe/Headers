@interface TSAppMonitor : NSObject <TSAppMonitorType> {
    void /* unknown type, empty encoding */ onWindowDidBecomeBackgroundBlock;
    void /* unknown type, empty encoding */ onWindowWillBecomeForegroundBlock;
}

@property (nonatomic) void /* unknown type, empty encoding */ isActive;
@property (nonatomic) void /* unknown type, empty encoding */ isTracking;

- (id)init;
- (id)onWindowDidBecomeBackgroundWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)triggerWithEvent:(long long)a0;
- (id)onWindowWillBecomeForegroundWithBlock:(id /* block */)a0;

@end
