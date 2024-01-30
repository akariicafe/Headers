@interface SBSServiceFacilityClient : FBSServiceFacilityClient {
    long long _numberOfCheckOuts;
}

+ (void)checkInClient:(id)a0;
+ (id)serviceFacilityIdentifier;
+ (id)checkOutClientWithClass:(Class)a0;

- (void)_incrementCheckout;
- (BOOL)_decrementCheckout;
- (id)initWithCalloutQueue:(id)a0;
- (id)initWithIdentifier:(id)a0 calloutQueue:(id)a1;

@end
