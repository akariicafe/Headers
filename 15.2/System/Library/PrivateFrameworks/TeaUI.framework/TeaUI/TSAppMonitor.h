@interface TSAppMonitor : NSObject <TSAppMonitorType> {
    void /* unknown type, empty encoding */ onWindowDidBecomeBackgroundBlock;
    void /* unknown type, empty encoding */ onWindowWillBecomeForegroundBlock;
}

@property (nonatomic) void /* unknown type, empty encoding */ isActive;
@property (nonatomic) void /* unknown type, empty encoding */ isTracking;

- (id)onWindowWillBecomeForegroundWithBlock:(id /* block */)a0;
- (id)onWindowDidBecomeBackgroundWithBlock:(id /* block */)a0;
- (void)triggerWithEvent:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
