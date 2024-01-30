@class NSXPCListener, NSFileManager, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXSource : NSObject <MXSourceXPCServer, NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *MXSourceLogHandle;
@property (retain) NSFileManager *fileManager;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSource;
+ (void)sanitizeDeviceMetadataForDiagnostic:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)bundleIDFromPid:(int)a0;
- (id)bundleIDFromURL:(id)a0;
- (void)writeMetricDataWithPayload:(id)a0;
- (void)writeDiagnosticDataWithPayload:(id)a0;
- (void)deliverDummyPayloadForClient:(id)a0;
- (BOOL)validatePayload:(id)a0;
- (id)setupSourceDirectoryForSource:(long long)a0;
- (void)removeFilesForSourceID:(long long)a0 dateString:(id)a1;
- (BOOL)validatePowerlogData:(id)a0;
- (BOOL)validateHangTracerData:(id)a0;
- (BOOL)validateSpinTracerData:(id)a0;
- (BOOL)validateReportCrashData:(id)a0;
- (void)cleanDataDirectoryForSource:(long long)a0 dateString:(id)a1;

@end
