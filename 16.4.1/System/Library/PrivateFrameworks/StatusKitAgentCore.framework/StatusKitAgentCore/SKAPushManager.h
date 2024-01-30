@class FTMessageDelivery, APSConnection, NSString, NSObject, SKASystemMonitor;
@protocol OS_dispatch_queue, SKAPushManagingDelegate;

@interface SKAPushManager : NSObject <APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAPushManagingDelegate> delegate;

+ (id)logger;

- (id)pushToken;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)subscribeToPresenceChannels:(id)a0;
- (void)subscribeToStatusChannels:(id)a0;
- (void)publishStatus:(id)a0 completion:(id /* block */)a1;
- (void)enableActivityTracking;
- (void)_switchFilterToEnabledForTopic:(id)a0;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)switchStatusFilterToEnabled;
- (void)_initializeAPSConnection;
- (id)serverTime;
- (void)_subscribedChannelsForTopic:(id)a0 WithCompletion:(id /* block */)a1;
- (void)switchStatusFilterToNonwaking;
- (void)unsubscribeFromPresenceChannels:(id)a0;
- (void)_switchFilterToNonwakingForTopic:(id)a0;
- (void)subscribedStatusChannelsWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 systemMonitor:(id)a1 inTrafficMode:(BOOL)a2;
- (BOOL)_sharedChannelsIsDisabledByServer;
- (void)switchPresenceFilterToEnabled;
- (void)sendPresenceMessage:(id)a0 completion:(id /* block */)a1;
- (void)_unsubscribeFromChannels:(id)a0 forTopic:(id)a1;
- (void)subscribedPresenceChannelsWithCompletion:(id /* block */)a0;
- (void)createChannelWithProtoData:(id)a0 completion:(id /* block */)a1;
- (id)_pushEnvironment;
- (void)unsubscribeFromStatusChannels:(id)a0;
- (void)_subscribeToChannels:(id)a0 forTopic:(id)a1;
- (void).cxx_destruct;
- (void)disableActivityTracking;
- (void)switchPresenceFilterToNonwaking;

@end
