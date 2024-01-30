@class NSXPCListener, NSMutableDictionary, NSString, MXSource, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXCore : NSObject <MXXPCServer, NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *MXCoreLogHandle;
@property (retain) NSObject<OS_os_log> *MXCoreXcodeSupportLogHandle;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSMutableDictionary *clientDictionary;
@property (retain, nonatomic) NSMutableDictionary *clientTeamIDs;
@property (retain, nonatomic) NSString *currentDataActivityDate;
@property (retain) MXSource *source;
@property (readonly, retain) NSMutableSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCore;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stopServices;
- (id)bundleIDFromPid:(int)a0;
- (id)bundleIDFromURL:(id)a0;
- (void)registerClient;
- (id)bundleIDFromAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)performDataActivity;
- (id)applicationContainerPathForBundleID:(id)a0;
- (BOOL)createDirectoryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (void)deliverDummyPayloadForXcodeClient:(id)a0;
- (id)readClientDictionary;
- (void)scheduleDataActivity;
- (BOOL)readClientAvailabilityPreference;
- (void)updateClientAvailabilityWithBool:(BOOL)a0;
- (id)getDailyActivityCriteria;
- (void)createServices;
- (BOOL)checkSourceDataAvailable;
- (BOOL)deliverMetricPayloadsForClient:(id)a0 atPath:(id)a1 withError:(id)a2;
- (void)cleanServicesDataDirectories;
- (void)updateClientDictionary;
- (id)getMetricPayloadForClient:(id)a0;
- (BOOL)writeMetricReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;
- (id)getDummyPayloadForClient:(id)a0 dateString:(id)a1;
- (id)getDummyDiagnosticPayloadForClient:(id)a0 dateString:(id)a1;
- (id)teamIDFromAuditToken:(struct { unsigned int x0[8]; })a0;

@end
