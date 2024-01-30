@class NSString, HKConceptSelection;

@interface HKConceptQuery : HKQuery <HKConceptQueryClientInterface> {
    HKConceptSelection *_selection;
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateConceptsWithHandler:(id)a0 handler:(id /* block */)a1;
- (void)client_deliverConcepts:(id)a0 queryUUID:(id)a1;
- (id)initWithConceptSelection:(id)a0 resultsHandler:(id /* block */)a1;
- (void)queue_populateConfiguration:(id)a0;

@end
