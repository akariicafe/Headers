@interface CRKCatalystNetworkPowerPrimitives : NSObject <CATNetworkPowerPrimitives, CATAssertionProviding>

- (id)acquireAssertion;
- (id)assertNetworkPowerOn;

@end
