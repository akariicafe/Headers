@interface TPSRegistrationRequestController : TPSRequestController

- (void)networkListAvailable:(id)a0 list:(id)a1;
- (void)executeRequest:(id)a0;
- (void)executeFetchForRequest:(id)a0;
- (void)respondWithSubscription:(id)a0 cellularNetworks:(id)a1 error:(id)a2;

@end
