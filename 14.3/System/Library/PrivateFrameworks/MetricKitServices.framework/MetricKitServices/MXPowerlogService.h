@class NSObject, NSMutableArray, MXSourceXPCPayload;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXPowerlogService : MXService

@property (retain) NSMutableArray *powerlogDataPaths;
@property (retain) MXSourceXPCPayload *unarchivedPowerlogData;
@property (retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedPowerlogService;

- (id)init;
- (void).cxx_destruct;
- (BOOL)stopService;
- (BOOL)startService;
- (BOOL)metricsSupported;
- (BOOL)metricsAvailableForDate:(id)a0;
- (id)getMetricsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;

@end
