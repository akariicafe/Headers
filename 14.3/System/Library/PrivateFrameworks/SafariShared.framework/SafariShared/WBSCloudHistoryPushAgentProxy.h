@class NSString, NSXPCConnection;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent> {
    NSXPCConnection *_agentConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acknowledgePendingPushNotifications;
- (id)queryMemoryFootprintWithError:(id *)a0;
- (void)getPushNotifications:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (void)clearAcknowledgedPushNotifications;

@end
