@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXSpinTracerService : MXService

@property (retain) NSMutableArray *spinTracerDataPaths;
@property (retain) NSMutableArray *unarchivedSpinTracerData;
@property (retain) NSObject<OS_os_log> *MXSpinTracerServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedSpinTracerService;

- (BOOL)stopService;
- (void).cxx_destruct;
- (id)init;
- (BOOL)startService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;
- (void)unarchiveSpinTracerDataForDateString:(id)a0;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;

@end
