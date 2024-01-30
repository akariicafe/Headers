@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXHangTracerService : MXService

@property (retain) NSMutableArray *hangTracerDataPaths;
@property (retain) NSMutableArray *unarchivedHangTracerData;
@property (retain) NSObject<OS_os_log> *MXHangTracerServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedHangTracerService;

- (id)init;
- (void).cxx_destruct;
- (BOOL)stopService;
- (BOOL)startService;
- (BOOL)diagnosticsSupported;
- (BOOL)diagnosticsAvailableForDate:(id)a0;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;
- (void)unarchiveHangTracerDataForDateString:(id)a0;

@end
