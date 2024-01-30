@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WAXPCConnectionDelegate;

@interface WAXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *token;
@property (weak, nonatomic) id<WAXPCConnectionDelegate> delegate;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)summarizeDeviceAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1 andReply:(id /* block */)a2;
- (id)initWithXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)ingestMessage:(id)a0 andReply:(id /* block */)a1;
- (void)trigger11axPerfStudyAndReply:(id /* block */)a0;
- (void)getMessageForUUID:(id)a0 andReply:(id /* block */)a1;
- (void)submitMessage:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)submitWiFiAnalyticsMessage:(id)a0 andReply:(id /* block */)a1;
- (void)setDeviceAnalyticsConfiguration:(id)a0 andReply:(id /* block */)a1;
- (void)triggerQueryForNWActivity:(long long)a0 andReply:(id /* block */)a1;
- (void)killDaemonAndReply:(id /* block */)a0;
- (void)clearMessageStoreAndReply:(id /* block */)a0;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)a0 andReply:(id /* block */)a1;
- (void)getNewMessageForKey:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)getMessagesModelForGroupType:(long long)a0 andReply:(id /* block */)a1;
- (void)getDeviceAnalyticsConfigurationAndReply:(id /* block */)a0;
- (void)clientConfigChangeDelegateSetForGroupType:(long long)a0 andReply:(id /* block */)a1;
- (void)establishConnectionWithToken:(id)a0 andReply:(id /* block */)a1;
- (void)registerForQueryableMessageWithidentifierDict:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)registerMessageGroup:(long long)a0 andReply:(id /* block */)a1;
- (void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)a0 waMessage:(id)a1 andReply:(id /* block */)a2;

@end
