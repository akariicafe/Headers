@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXReportCrashService : MXService

@property (retain) NSMutableArray *reportCrashDataPaths;
@property (retain) NSMutableArray *unarchivedReportCrashData;
@property (retain) NSObject<OS_os_log> *MXReportCrashServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedReportCrashService;

- (BOOL)startService;
- (id)init;
- (void).cxx_destruct;
- (BOOL)stopService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)_updateService;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;
- (void)unarchiveReportCrashDataForDateString:(id)a0;

@end
