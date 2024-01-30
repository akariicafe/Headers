@interface HKMCAnalysisQuery : HKQuery {
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) BOOL forceAnalysis;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverAnalysis:(id)a0 queryUUID:(id)a1;
- (id)initWithForceAnalysis:(BOOL)a0 updateHandler:(id /* block */)a1;

@end
