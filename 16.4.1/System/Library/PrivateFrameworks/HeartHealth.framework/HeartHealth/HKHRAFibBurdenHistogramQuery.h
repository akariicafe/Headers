@interface HKHRAFibBurdenHistogramQuery : HKQuery {
    id /* block */ _resultsHandler;
}

+ (id)clientInterfaceProtocol;

- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (id)initWithResultsHandler:(id /* block */)a0;
- (void)client_deliverHistogramResult:(id)a0 queryUUID:(id)a1;

@end
