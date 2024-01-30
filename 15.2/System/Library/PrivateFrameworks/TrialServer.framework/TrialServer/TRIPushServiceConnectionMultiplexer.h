@class NSString;
@protocol TRIPushServiceConnectionCreating, TRIPushServiceConnectionDelegate, TRIPushServiceChannelSubscribing;

@interface TRIPushServiceConnectionMultiplexer : NSObject <TRIPushServiceConnectionMultiplexing>

@property (readonly, nonatomic) id<TRIPushServiceConnectionCreating> connectionCreator;
@property (readonly, nonatomic) id<TRIPushServiceChannelSubscribing> currentConnection;
@property (readonly, nonatomic) id<TRIPushServiceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_expectedChannelIdsForDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void)subscribeForRolloutDeployment:(id)a0;
- (id)initWithConnectionCreator:(id)a0 connectionDelegate:(id)a1;
- (void)subscribeForExperimentId:(id)a0;
- (void)ensureSubscriptionsExistOnlyForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void)unsubscribeForExperimentId:(id)a0;
- (void)switchToEnvironment:(unsigned char)a0;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1;
- (void).cxx_destruct;

@end
