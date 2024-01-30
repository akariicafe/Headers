@class NSXPCListener, NSFileManager, NSString, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXSource : NSObject <MXSourceXPCServer, NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *MXSourceLogHandle;
@property (retain) NSFileManager *fileManager;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (readonly, retain) NSMutableSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSource;
+ (void)sanitizeDeviceMetadataForDiagnostic:(id)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)stopServices;
- (void).cxx_destruct;
- (id)bundleIDFromPid:(int)a0;
- (id)bundleIDFromURL:(id)a0;
- (BOOL)validatePayload:(id)a0;
- (void)writeDiagnosticDataWithPayload:(id)a0;
- (void)deliverDummyPayloadForClient:(id)a0;
- (void)writeMetricDataWithPayload:(id)a0;
- (id)applicationContainerPathForBundleID:(id)a0;
- (void)cleanDataDirectoryForSource:(long long)a0;
- (void)cleanDiagnosticsDirectoryForSource:(long long)a0 andClient:(id)a1;
- (BOOL)createDirectoryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (void)createServicesForClient:(id)a0;
- (id)getDiagnosticPayloadForClient:(id)a0 dateString:(id)a1;
- (void)removeDeliveredDiagnosticsForSourceID:(long long)a0 dateString:(id)a1;
- (void)removeFilesForSourceID:(long long)a0;
- (void)removeFilesForSourceID:(long long)a0 andClient:(id)a1;
- (id)setupSourceDirectoryForSource:(long long)a0 andClient:(id)a1;
- (BOOL)validateHangTracerData:(id)a0;
- (BOOL)validatePowerlogData:(id)a0;
- (BOOL)validateReportCrashData:(id)a0;
- (BOOL)validateSpinTracerData:(id)a0;
- (BOOL)writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;

@end
