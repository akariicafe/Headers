@class NSXPCListener, NSMutableDictionary, NSString, MXSource, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXCore : NSObject <MXXPCServer, NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *MXCoreLogHandle;
@property (retain) NSObject<OS_os_log> *MXCoreXcodeSupportLogHandle;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSMutableDictionary *clientDictionary;
@property (retain, nonatomic) NSString *currentDataActivityDate;
@property long long currentDataActivityRetryCount;
@property (retain) MXSource *source;
@property (readonly, retain) NSMutableSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCore;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerClient;
- (void)stopServices;
- (id)bundleIDFromPid:(int)a0;
- (id)bundleIDFromURL:(id)a0;
- (id)bundleIDFromAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)deliverDummyPayloadForXcodeClient:(id)a0;
- (void)scheduleDataActivity;
- (id)getDailyActivityCriteria;
- (id)getRetryActivityCriteria;
- (void)createServices;
- (BOOL)checkSourceDataAvailableForDate:(id)a0;
- (id)applicationContainerPathForBundleID:(id)a0;
- (BOOL)createDirectoryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (id)getMetricPayloadForClient:(id)a0 dateString:(id)a1;
- (BOOL)writeMetricReport:(id)a0 atAppContainerPath:(id)a1 withError:(id *)a2;
- (id)getDiagnosticPayloadForClient:(id)a0 dateString:(id)a1;
- (BOOL)writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 withError:(id *)a2;
- (void)cleanServicesDataDirectories;
- (id)getDummyPayloadForClient:(id)a0 dateString:(id)a1;
- (id)getDummyDiagnosticPayloadForClient:(id)a0 dateString:(id)a1;

@end
