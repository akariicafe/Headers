@class DRSTaskingCloudKitHelper, DRSTaskingDecisionMaker, DRSTaskingMessageChannel, NSObject;
@protocol OS_dispatch_queue;

@interface DRSTaskingManager : NSObject

@property (readonly, nonatomic) DRSTaskingDecisionMaker *decisionMaker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id /* block */ configStateChangeBlock;
@property (retain, nonatomic) DRSTaskingMessageChannel *taskingMessageChannel;
@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper;

- (BOOL)processTaskingSystemMessage:(id)a0 cloudChannelConfig:(id)a1 transaction:(id)a2 shouldEmitCATelemetry:(BOOL)a3;
- (void)_bestEffortLogMessageReceiptTelemetry:(id)a0 transaction:(id)a1 cloudChannelConfig:(id)a2;
- (BOOL)updatePersistedChannelConfig:(id)a0 errorOut:(id *)a1;
- (id)initWithDecisionMaker:(id)a0 cloudKitHelper:(id)a1 configStateChangeBlock:(id /* block */)a2;
- (id)persistedCloudChannelConfig;
- (void)_emitTelemetryForLoggableMesssage:(id)a0 transaction:(id)a1 cloudChannelConfig:(id)a2;
- (id)initWithDecisionMaker:(id)a0 configStateChangeBlock:(id /* block */)a1;
- (void)clientRejectsConfigUUID:(id)a0 teamID:(id)a1;
- (BOOL)unsubscribeFromSubscribedChannelWithErrorOut:(id *)a0;
- (void)_emitTaskingSystemMessageTelemetry:(id)a0 messageType:(id)a1 dateBroadcast:(id)a2 dateReceived:(id)a3 transaction:(id)a4 cloudChannelConfig:(id)a5;
- (void)processTaskingMessage:(id)a0 cloudChannelConfig:(id)a1 transaction:(id)a2 shouldEmitCATelemetry:(BOOL)a3;
- (void).cxx_destruct;
- (BOOL)clearTaskingHistoryWithErrorOut:(id *)a0;
- (void)processPingMessage:(id)a0 cloudChannelConfig:(id)a1 transaction:(id)a2 shouldEmitCATelemetry:(BOOL)a3;
- (id)metadataForConfigUUID:(id)a0 teamID:(id)a1 errorOut:(id *)a2;
- (BOOL)subscribeToChannelWithConfig:(id)a0 errorOut:(id *)a1;
- (void)processCancelMessage:(id)a0 cloudChannelConfig:(id)a1 transaction:(id)a2 shouldEmitCATelemetry:(BOOL)a3;
- (BOOL)checkConfigsForInvalidation:(id *)a0;
- (void)clientCompletedConfigUUID:(id)a0 teamID:(id)a1;
- (BOOL)processTaskingSystemMessageJSONDict:(id)a0 cloudChannelConfig:(id)a1 transaction:(id)a2 shouldEmitCATelemetry:(BOOL)a3;
- (BOOL)processTaskingSystemMessageJSONData:(id)a0 transaction:(id)a1 shouldEmitCATelemetry:(BOOL)a2;

@end
