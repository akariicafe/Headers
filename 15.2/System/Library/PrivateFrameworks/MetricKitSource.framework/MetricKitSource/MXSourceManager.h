@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface MXSourceManager : NSObject <MXSourceXPCClient>

@property (retain, nonatomic) NSObject<OS_os_log> *sourceManagerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (id)_createXPCConnection;
- (void).cxx_destruct;
- (id)init;
- (void)sendMetrics:(id)a0 forDate:(id)a1 andSourceID:(long long)a2;
- (void)sendDiagnostic:(id)a0 forDate:(id)a1 andSourceID:(long long)a2;
- (void)simulatePayloadDeliveryForClient:(id)a0;

@end
