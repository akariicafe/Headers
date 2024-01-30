@class APSConnection, PKPublicChannel, NSString, DRSCloudChannelConfig, NSObject;
@protocol OS_dispatch_queue;

@interface DRSTaskingMessageChannel : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) PKPublicChannel *pubSubChannel;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSString *apsEnvironmentString;
@property (readonly, nonatomic) DRSCloudChannelConfig *config;
@property (readonly, nonatomic) id /* block */ processingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (BOOL)unsubscribe:(id *)a0;
- (BOOL)subscribe:(id *)a0;
- (id)initWithCloudChannelConfig:(id)a0 payloadProcessingBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
