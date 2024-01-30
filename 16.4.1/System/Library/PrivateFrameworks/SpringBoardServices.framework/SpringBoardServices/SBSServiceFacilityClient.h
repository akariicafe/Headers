@interface SBSServiceFacilityClient : FBSServiceFacilityClient {
    long long _numberOfCheckOuts;
}

+ (void)checkInClient:(id)a0;
+ (id)checkOutClientWithClass:(Class)a0;
+ (id)serviceFacilityIdentifier;

- (id)initWithIdentifier:(id)a0 calloutQueue:(id)a1;
- (id)initWithCalloutQueue:(id)a0;
- (BOOL)_decrementCheckout;
- (void)_incrementCheckout;

@end
