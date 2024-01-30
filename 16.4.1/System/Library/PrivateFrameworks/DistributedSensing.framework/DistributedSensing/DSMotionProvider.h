@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startedProviderWithOptions:(id)a0;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)subscriptionExpired;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)sendMotionData:(id)a0;
- (void)unsubscribed;
- (void)stopMotionDataProvider;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)stoppedProvider;
- (void).cxx_destruct;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;

@end
