@interface HVXPCInternalServer : NSObject <HVXPCInternalServiceProtocol>

- (void)statsWithCompletion:(id /* block */)a0;
- (void)contentAvailableFromSources:(unsigned int)a0 completion:(id /* block */)a1;
- (void)deleteContentWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)disableConsumptionOfDataSources:(unsigned int)a0 completion:(id /* block */)a1;
- (void)donateSearchableItem:(id)a0 completion:(id /* block */)a1;
- (void)enableConsumptionOfDataSources:(unsigned int)a0 completion:(id /* block */)a1;
- (void)harvestWithCompletion:(id /* block */)a0;
- (void)overrideIsConnectedToPower:(id)a0 completion:(id /* block */)a1;
- (void)refillHarvestBudgetWithCompletion:(id /* block */)a0;
- (void)restoreConsumptionOfDataSources:(unsigned int)a0 completion:(id /* block */)a1;

@end
