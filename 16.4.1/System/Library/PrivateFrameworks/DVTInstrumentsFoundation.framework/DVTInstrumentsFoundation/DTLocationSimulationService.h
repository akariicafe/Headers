@class NSString;

@interface DTLocationSimulationService : DTXService <DTLocationSimulationServiceRequests>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)stopLocationSimulation;
- (id)initWithChannel:(id)a0;
- (void)simulateLocationWithLatitude:(id)a0 longitude:(id)a1;

@end
