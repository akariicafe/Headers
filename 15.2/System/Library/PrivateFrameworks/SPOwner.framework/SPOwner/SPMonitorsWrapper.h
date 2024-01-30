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

- (BOOL)isNetworkUp;
- (unsigned long long)powerState;
- (id)initWithBeaconManager:(id)a0 delegateQueue:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)stop;

@end
