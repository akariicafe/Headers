@interface HKMCAnalysisQuery : HKQuery {
    id /* block */ _updateHandler;
}

+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)client_deliverAnalysis:(id)a0 queryUUID:(id)a1;

@end
