@class NSXPCConnection;
@protocol SBSPowerMonitorImplementer;

@interface SBSPowerMonitor : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSPowerMonitorImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getPowerEstimateForInterval:(float)a0 reply:(id /* block */)a1;

@end
