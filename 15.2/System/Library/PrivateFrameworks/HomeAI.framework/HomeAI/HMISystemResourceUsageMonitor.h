@class HMISystemResourceUsageMonitorImpl, NSObject;
@protocol OS_dispatch_queue, HMISystemResourceUsageMonitorDelegate;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol>

@property (readonly) HMISystemResourceUsageMonitorImpl *systemResourceUsageMonitorImpl;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;

- (void)start;
- (id)getCurrentSystemResourceUsage;
- (void).cxx_destruct;
- (id)init;

@end
