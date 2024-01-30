@class NSObject;
@protocol HMISystemResourceUsageMonitorProtocol, OS_dispatch_queue, HMISystemResourceUsageMonitorDelegate;

@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol>

@property (readonly) id<HMISystemResourceUsageMonitorProtocol> resourceUsageMonitor;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;

- (id)initWithProductClass:(long long)a0 workQueue:(id)a1;
- (void)start;
- (id)getCurrentSystemResourceUsage;
- (void).cxx_destruct;

@end
