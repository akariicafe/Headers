@protocol CATNetworkPowerPrimitives;

@interface CATNetworkPowerPrimitivesBackedAssertionProvider : NSObject <CATAssertionProviding>

@property (readonly, nonatomic) id<CATNetworkPowerPrimitives> networkPowerPrimitives;

- (id)acquireAssertion;
- (void).cxx_destruct;
- (id)initWithNetworkPowerPrimitives:(id)a0;

@end
