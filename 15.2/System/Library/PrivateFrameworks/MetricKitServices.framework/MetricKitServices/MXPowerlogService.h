@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXPowerlogService : MXService

@property (retain) NSMutableArray *powerlogDataPaths;
@property (retain) NSMutableArray *unarchivedPowerlogData;
@property (retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedPowerlogService;

- (BOOL)stopService;
- (void).cxx_destruct;
- (id)init;
- (BOOL)startService;
- (BOOL)metricsSupported;
- (BOOL)metricsAvailable;
- (id)getMetricsForClient:(id)a0;
- (BOOL)_updateService;
- (void)unarchivePowerlogData;

@end
