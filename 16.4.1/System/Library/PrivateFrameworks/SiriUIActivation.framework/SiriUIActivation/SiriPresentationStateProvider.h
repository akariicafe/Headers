@class SASPresentationState, NSObject;
@protocol OS_dispatch_queue, SiriPresentationStateProviderDelegate;

@interface SiriPresentationStateProvider : NSObject {
    SASPresentationState *_presentationState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (nonatomic) BOOL shouldProvideUpdates;
@property (nonatomic) BOOL updatesAvailable;
@property (weak, nonatomic) id<SiriPresentationStateProviderDelegate> delegate;

- (void)barrierWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_dispatchedDiffAndApplyMutatedStatus:(id)a0;
- (void)_invokeOnDispatchQueue:(id /* block */)a0;
- (void)_setupProviderForSiriPresentationIdentifier:(long long)a0;
- (void)beginProvidingPresentationStateUpdates;
- (id)initWithSiriPresentationIdentifier:(long long)a0 delegate:(id)a1;
- (void)stopProvidingPresentationStateUpdatesAndResendLastUpdateOnResumption:(BOOL)a0;

@end
