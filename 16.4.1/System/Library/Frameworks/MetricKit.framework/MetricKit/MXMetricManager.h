@class NSXPCConnection, NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject <MXXPCClient>

@property (class, readonly) MXMetricManager *sharedManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *managerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int metricToken;
@property BOOL checkedMetrics;
@property BOOL checkedDiagnostics;
@property (retain) NSArray *pastPayloads;
@property (retain) NSArray *pastDiagnosticPayloads;
@property (retain, nonatomic) NSHashTable *subscribers;

+ (BOOL)extendLaunchMeasurementForTaskID:(id)a0 error:(id *)a1;
+ (BOOL)finishExtendedLaunchMeasurementForTaskID:(id)a0 error:(id *)a1;
+ (id)makeLogHandleWithCategory:(id)a0;

- (id)_createXPCConnection;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (BOOL)_cachedPayloadAvailable;
- (void)_checkAndDeliverDiagnosticReports;
- (void)_checkAndDeliverMetricReports;
- (void)deliverDiagnosticPayload:(id)a0;
- (void)deliverMetricPayload:(id)a0;
- (id)mergeDiagnosticsAtLocation:(id)a0;
- (void)registrationProcessed;

@end
