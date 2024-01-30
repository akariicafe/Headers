@class NSMutableDictionary, NSXPCConnection, NSString, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WAClient : NSObject {
    NSMutableDictionary *_interestedMessageIdentifiers;
    NSMutableDictionary *_configuredMessageIdentifiers;
}

@property (retain, nonatomic) NSXPCConnection *conn;
@property (retain, nonatomic) NSMutableDictionary *configChangeDelegatesPerGroupType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryableQueue;
@property (retain, nonatomic) NSMutableArray *queuedInvocations;
@property (retain, nonatomic) NSMutableDictionary *registeredQueryableHandlerBlocks;
@property (nonatomic) double connectionRecoveryStartTime;
@property (nonatomic) unsigned char daemonConnectionValid;
@property (nonatomic) unsigned char blockDaemonConnection;
@property (copy, nonatomic) id /* block */ recoveryTickBlock;
@property (retain, nonatomic) NSString *tokenForThisClient;
@property (retain, nonatomic) NSString *identifierForThisClient;
@property (retain, nonatomic) NSMutableSet *registeredGroupTypes;
@property (retain, nonatomic) NSMutableDictionary *configuredMessageIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *interestedMessageIdentifiers;

+ (id)sharedClientWithIdentifier:(id)a0;
+ (id)sharedClient;

- (id)_initPrivate;
- (void)_getMessageForUUID:(id)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)_registerMessageGroup:(long long)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)_connectionRecoveryTick;
- (void)summarizeDeviceAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1 andReply:(id /* block */)a2;
- (void)_connectionTimedOut;
- (id)init;
- (void)_reregister;
- (void).cxx_destruct;
- (void)ingestMessage:(id)a0 andReply:(id /* block */)a1;
- (void)trigger11axPerfStudyAndReply:(id /* block */)a0;
- (void)getMessageForUUID:(id)a0 andReply:(id /* block */)a1;
- (void)_setDeviceAnalyticsConfiguration:(id)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)dealloc;
- (void)_replyAllWithTimeoutErrorAndRemove;
- (void)submitMessage:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)_establishDaemonConnection;
- (void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)_setConfigChangeDelegateForGroupType:(long long)a0 queuedInvocation:(id)a1;
- (void)_triggerQueryForNWActivity:(long long)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)_registerForQueryableMessageWithIdentifierDict:(id)a0 groupType:(long long)a1 withHandlerBlock:(id /* block */)a2 andReply:(id /* block */)a3 queuedInvocation:(id)a4;
- (void)submitWiFiAnalyticsMessage:(id)a0 andReply:(id /* block */)a1;
- (void)submitQueriedMetricWithIdentifierDict:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)setDeviceAnalyticsConfiguration:(id)a0 andReply:(id /* block */)a1;
- (void)_startConnectionRecovery;
- (id /* block */)_getConnectionIssueHandlerBlock;
- (void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)a0 waMessage:(id)a1 andReply:(id /* block */)a2 queuedInvocation:(id)a3;
- (void)triggerQueryForNWActivity:(long long)a0 andReply:(id /* block */)a1;
- (void)configuredMessagesDidChange:(id)a0 andInterestedMessageIDs:(id)a1 forGroupType:(long long)a2;
- (void)setConfigChangedDelegate:(id)a0 forGroupType:(long long)a1 andReply:(id /* block */)a2;
- (void)registerForQueryableMessageWithIdentifierDict:(id)a0 groupType:(long long)a1 withHandlerBlock:(id /* block */)a2 andReply:(id /* block */)a3;
- (void)killDaemonAndReply:(id /* block */)a0;
- (void)_wakeUpNotificationForThisClientReceived:(id)a0;
- (void)clearMessageStoreAndReply:(id /* block */)a0;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)a0 andReply:(id /* block */)a1;
- (void)getNewMessageForKey:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)getMessagesModelForGroupType:(long long)a0 andReply:(id /* block */)a1;
- (void)_removeAllQueuedInvocations;
- (void)getDeviceAnalyticsConfigurationAndReply:(id /* block */)a0;
- (void)_getDeviceAnalyticsConfigurationAndReply:(id /* block */)a0 queuedInvocation:(id)a1;
- (void)_dequeueInvocation:(id)a0;
- (void)summarizeDeviceAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1 andReply:(id /* block */)a2 queuedInvocation:(id)a3;
- (void)_trigger11axPerfStudyAndReply:(id /* block */)a0 queuedInvocation:(id)a1;
- (void)_clearMessageStoreAndReply:(id /* block */)a0 queuedInvocation:(id)a1;
- (void)_killDaemonAndReply:(id /* block */)a0 queuedInvocation:(id)a1;
- (void)fakeDaemonConnectionDead:(unsigned char)a0;
- (void)_connectionRecovered;
- (void)_ingestMessage:(id)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)registerMessageGroup:(long long)a0 andReply:(id /* block */)a1;
- (void)_getMessagesModelForGroupType:(long long)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)_submitWiFiAnalyticsMessage:(id)a0 andReply:(id /* block */)a1 queuedInvocation:(id)a2;
- (void)_submitMessage:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2 queuedInvocation:(id)a3;
- (void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)a0 waMessage:(id)a1 andReply:(id /* block */)a2;
- (void)_getNewMessageForKey:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2 queuedInvocation:(id)a3;

@end
