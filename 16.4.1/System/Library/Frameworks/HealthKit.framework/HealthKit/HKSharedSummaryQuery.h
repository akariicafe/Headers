@class NSString, HKSharedSummaryTransaction;

@interface HKSharedSummaryQuery : HKQuery <HKSharedSummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
    HKSharedSummaryTransaction *_transaction;
    NSString *_package;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)client_deliverSummaries:(id)a0 query:(id)a1;
- (id)initWithTransaction:(id)a0 package:(id)a1 resultsHandler:(id /* block */)a2;

@end
