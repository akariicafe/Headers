@class SPNetworkMonitor, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue, SPMonitorsWrapperDelegate;

@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate>

@property (weak, nonatomic) id<SPMonitorsWrapperDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) SPNetworkMonitor *networkMonitor;
@property (retain, nonatomic) NSDate *lastStateChangeDate;
@property (retain, nonatomic) NSDate *nextStateChangeDate;
@property BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)powerState;
- (BOOL)isNetworkUp;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)start;
- (void)resume;
- (id)initWithBeaconManager:(id)a0 delegateQueueu:(id)a1;

@end
