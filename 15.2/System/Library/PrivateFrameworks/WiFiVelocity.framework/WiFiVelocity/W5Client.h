@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface W5Client : NSObject {
    NSXPCConnection *_conn;
    NSObject<OS_dispatch_queue> *_queue;
    double _lastRecoveryTimestamp;
    NSMutableArray *_mutableEventIDs;
    NSMutableArray *_mutableUUIDs;
    NSMutableDictionary *_mutableEventCallbackMap;
}

@property (copy, nonatomic) id /* block */ eventCallback;

+ (id)sharedClient;

- (void)stopBrowsing;
- (void)cancelAllRequests;
- (id)queryDebugConfigurationForPeer:(id)a0 error:(out id *)a1;
- (id)__collectBusyFallbackLogsWithReason:(id)a0 compress:(BOOL)a1;
- (void)__cancelRequestWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)startMonitoringEvents:(id)a0;
- (id)peers;
- (void)receivedEvent:(id)a0;
- (id)collectLogs:(id)a0 configuration:(id)a1 update:(id /* block */)a2 reply:(id /* block */)a3;
- (void)stopMonitoringEvents:(id)a0;
- (void)queryDebugConfigurationForPeer:(id)a0 reply:(id /* block */)a1;
- (id)__collectJetsamFallbackLogsWithReason:(id)a0 compress:(BOOL)a1;
- (void)__stopMonitoringEvents:(id)a0 reply:(id /* block */)a1;
- (BOOL)setDebugConfiguration:(id)a0 peer:(id)a1 error:(out id *)a2;
- (void)__queryLocalPeerAndReply:(id /* block */)a0;
- (void)setDebugConfiguration:(id)a0 peer:(id)a1 reply:(id /* block */)a2;
- (void)startBrowsing;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (BOOL)__tarballWithSource:(id)a0 destination:(id)a1 error:(id *)a2;
- (void)cancelRequestWithUUID:(id)a0;
- (void)log:(id)a0 timestamp:(BOOL)a1;
- (id)collectLogs:(id)a0 configuration:(id)a1 update:(id /* block */)a2 receipts:(out id *)a3 error:(out id *)a4;
- (void)__logsCollectedWithTemporaryURL:(id)a0 outputURL:(id)a1 keepParent:(BOOL)a2 compress:(BOOL)a3 reply:(id /* block */)a4;
- (void)__log:(id)a0 timestamp:(BOOL)a1 reply:(id /* block */)a2;
- (id)init;
- (id)queryStatusForPeer:(id)a0 error:(out id *)a1;
- (id)localPeer;
- (void)__startMonitoringEvents:(id)a0 reply:(id /* block */)a1;
- (void)queryStatusForPeer:(id)a0 reply:(id /* block */)a1;
- (id)runDiagnostics:(id)a0 configuration:(id)a1 update:(id /* block */)a2 error:(out id *)a3;
- (id)runWiFiSnifferOnChannel:(id)a0 duration:(double)a1 peer:(id)a2 error:(out id *)a3;
- (void)dealloc;
- (void)__cancelAllRequestsAndReply:(id /* block */)a0;
- (void)__purgeFilesInDirectory:(id)a0 matching:(id)a1 maxAge:(unsigned long long)a2 maxCount:(unsigned long long)a3;
- (id)__mostRecentInDirectories:(id)a0 include:(id)a1 exclude:(id)a2 maxAge:(double)a3;
- (id)runWiFiSnifferOnChannel:(id)a0 duration:(double)a1 peer:(id)a2 reply:(id /* block */)a3;
- (id)runDiagnostics:(id)a0 configuration:(id)a1 update:(id /* block */)a2 reply:(id /* block */)a3;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)a0 error:(out id *)a1;

@end
