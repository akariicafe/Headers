@interface HDDrugInteractionEngineTaskServer : HDStandardTaskServer <HKDrugInteractionEngineServerInterface>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)remote_interactionClassForLifestyleFactor:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_interactionClassesForConceptWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_interactionClassesForMedication:(id)a0 completion:(id /* block */)a1;
- (void)remote_interactionResultForFirstMedication:(id)a0 secondMedication:(id)a1 completion:(id /* block */)a2;
- (void)remote_interactionResultForMedication:(id)a0 lifestyleFactor:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_interactionResultsForInteractionClasses:(id)a0 completion:(id /* block */)a1;
- (void)remote_interactionResultsForMedications:(id)a0 lifestyleFactors:(id)a1 completion:(id /* block */)a2;

@end
