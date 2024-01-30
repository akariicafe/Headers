@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)subscriptionExpired;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)stoppedProvider;
- (void)sendMotionData:(id)a0;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)stopMotionDataProvider;
- (void)startedProviderWithOptions:(id)a0;
- (void)unsubscribed;
- (void).cxx_destruct;
- (void)startMotionDataProviderWithOptions:(id)a0;

@end
