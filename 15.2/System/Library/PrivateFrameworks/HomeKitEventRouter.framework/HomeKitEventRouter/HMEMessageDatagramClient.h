@class NSUUID, NSObject, HMEPendingTopicsCombiner;
@protocol HMETimerProvider, HMETimer, OS_os_log, HMETimerIntervalProvider, HMEMessageDatagramClientDelegate, HMEMessageDatagramClientDataSource;

@interface HMEMessageDatagramClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) double keepAliveInterval;
@property (readonly) id<HMETimerIntervalProvider> connectionRetryIntervalProvider;
@property (readonly) id<HMETimerProvider> timerProvider;
@property (readonly) HMEPendingTopicsCombiner *pendingTopicsCombiner;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL hasPendingRequest;
@property (nonatomic) BOOL hasPendingServerChangeRequest;
@property (retain, nonatomic) id<HMETimer> keepAliveTimer;
@property (retain, nonatomic) id<HMETimer> connectionRetryTimer;
@property (retain, nonatomic) NSUUID *connectedServerIdentifier;
@property (weak) id<HMEMessageDatagramClientDelegate> delegate;
@property (weak, nonatomic) id<HMEMessageDatagramClientDataSource> dataSource;

- (void)connectionCapabilityDidChange;
- (void)didReceiveMessageWithEvents:(id)a0 serverIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 keepAliveInterval:(double)a2 retryIntervalProvider:(id)a3 storeReadHandle:(id)a4 storeWriteHandle:(id)a5 logCategory:(const char *)a6;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 keepAliveInterval:(double)a2 retryIntervalProvider:(id)a3;
- (void)serverDidChangeWithServerIdentifier:(id)a0;
- (BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;

@end
