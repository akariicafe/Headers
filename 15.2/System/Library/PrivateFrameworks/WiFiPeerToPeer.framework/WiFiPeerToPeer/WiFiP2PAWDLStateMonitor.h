@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate> {
    NSObject<OS_dispatch_source> *_connectionRetryTimer;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ stateUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (void)endMonitoring;
- (void).cxx_destruct;
- (void)beginMonitoring;
- (id)init;
- (void)dealloc;
- (void)updatedAWDLState:(id)a0;
- (void)retryConnection;
- (int)queryAverageRSSIForPeer:(id)a0;

@end
