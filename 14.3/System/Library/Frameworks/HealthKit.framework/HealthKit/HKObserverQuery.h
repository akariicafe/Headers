@class NSString;

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface>

@property (readonly, nonatomic) id /* block */ updateHandler;
@property (nonatomic) BOOL observeUnfrozenSeries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (id)initWithSampleType:(id)a0 predicate:(id)a1 updateHandler:(id /* block */)a2;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void)client_dataUpdatedInDatabaseWithAnchor:(id)a0 query:(id)a1;

@end
