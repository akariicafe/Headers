@class INInteraction, NSString, WFRideOptionsLoader, WFIntentExecutor;

@interface WFRequestRideIntentAction : WFHandleSystemIntentAction <WFRideOptionsLoaderDelegate, WFIntentExecutorDelegate>

@property (readonly, nonatomic) WFRideOptionsLoader *rideOptionsLoader;
@property (retain, nonatomic) WFIntentExecutor *rideStatusExecutor;
@property (retain, nonatomic) INInteraction *requestRideInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (void).cxx_destruct;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (void)getOutputFromIntentResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleExecutionCompletionWithInteraction:(id)a0 error:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)intentExecutor:(id)a0 receivingRideStatusDidReceiveError:(id)a1;
- (void)intentExecutor:(id)a0 receivingRideStatusDidReceiveUpdate:(id)a1;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)errorFromListRideOptionsResponse:(id)a0 intent:(id)a1;
- (id)errorFromRequestRideResponse:(id)a0 intent:(id)a1;
- (id)mustVerifyCredentialsError;
- (id)noServiceInAreaError;
- (id)previousRideNeedsCompletionError;
- (id)previousRideNeedsFeedback;
- (void)rideOptionsLoader:(id)a0 errorFromListRideOptionsError:(id)a1 updatedErrorHandler:(id /* block */)a2;
- (id)rideScheduledTooFarError;
- (id)serviceTemporarilyUnavailableError;

@end
