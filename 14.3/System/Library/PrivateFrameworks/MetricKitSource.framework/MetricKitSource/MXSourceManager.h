@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface MXSourceManager : NSObject <MXSourceXPCClient>

@property (retain, nonatomic) NSObject<OS_os_log> *sourceManagerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (id)_createXPCConnection;
- (id)init;
- (void).cxx_destruct;
- (void)sendDiagnostic:(id)a0 forDate:(id)a1 andSourceID:(long long)a2;
- (void)sendMetrics:(id)a0 forDate:(id)a1 andSourceID:(long long)a2;
- (void)simulatePayloadDeliveryForClient:(id)a0;

@end
