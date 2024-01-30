@class NSXPCConnection, NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject <MXXPCClient>

@property (class, readonly) MXMetricManager *sharedManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *managerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int metricToken;
@property (retain) NSArray *pastPayloads;
@property (retain) NSArray *pastDiagnosticPayloads;
@property (retain, nonatomic) NSHashTable *subscribers;

+ (id)makeLogHandleWithCategory:(id)a0;

- (id)_createXPCConnection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)_checkAndDeliverMetricReports;
- (void)_checkAndDeliverDiagnosticReports;
- (void)registrationProcessed;
- (BOOL)_cachedPayloadAvailable;

@end
