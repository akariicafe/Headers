@class NSUUID, NSObject, HMEPendingTopicsCombiner;
@protocol HMETimerProvider, HMETimer, OS_os_log, HMETimerIntervalProvider, HMEMessageDatagramClientDelegate, HMEMessageDatagramClientDataSource;

@interface HMEMessageDatagramClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) id<HMETimerIntervalProvider> connectionRetryIntervalProvider;
@property (readonly) id<HMETimerProvider> timerProvider;
@property (readonly) HMEPendingTopicsCombiner *pendingTopicsCombiner;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL hasPendingRequest;
@property (nonatomic) BOOL hasPendingServerChangeRequest;
@property (readonly) double keepAliveInterval;
@property (retain, nonatomic) id<HMETimer> keepAliveTimer;
@property (retain, nonatomic) id<HMETimer> connectionRetryTimer;
@property (retain, nonatomic) NSUUID *connectedServerIdentifier;
@property (nonatomic) long long connectionMode;
@property (readonly) double dormatFetchTimerInterval;
@property (retain, nonatomic) id<HMETimer> dormantFetchTimer;
@property (nonatomic) BOOL dormantFetchConditionsMet;
@property (nonatomic) BOOL isWaitingForFetchConditionsWhenDormant;
@property (weak) id<HMEMessageDatagramClientDelegate> delegate;
@property (weak, nonatomic) id<HMEMessageDatagramClientDataSource> dataSource;

- (id)forwardingTopicsForTopics:(id)a0;
- (BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)connectionCapabilityDidChange;
- (id)upstreamTopicsForTopic:(id)a0;
- (void)serverDidChangeWithServerIdentifier:(id)a0;
- (void)didReceiveMessageWithCachedEvents:(id)a0 serverIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)updateConnectionMode:(long long)a0 completion:(id /* block */)a1;
- (void)updateDormantFetchCondition:(long long)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 keepAliveInterval:(double)a2 dormantFetchTimerInterval:(double)a3 retryIntervalProvider:(id)a4;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 keepAliveInterval:(double)a2 dormantFetchTimerInterval:(double)a3 retryIntervalProvider:(id)a4 storeReadHandle:(id)a5 storeWriteHandle:(id)a6 logCategory:(const char *)a7;
- (void)didReceiveMessageWithEvents:(id)a0 serverIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
