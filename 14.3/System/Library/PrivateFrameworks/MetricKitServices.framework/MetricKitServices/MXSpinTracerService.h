@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXSpinTracerService : MXService

@property (retain) NSMutableArray *spinTracerDataPaths;
@property (retain) NSMutableArray *unarchivedSpinTracerData;
@property (retain) NSObject<OS_os_log> *MXSpinTracerServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedSpinTracerService;

- (id)init;
- (void).cxx_destruct;
- (BOOL)stopService;
- (BOOL)startService;
- (BOOL)diagnosticsSupported;
- (BOOL)diagnosticsAvailableForDate:(id)a0;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;
- (void)unarchiveSpinTracerDataForDateString:(id)a0;

@end
