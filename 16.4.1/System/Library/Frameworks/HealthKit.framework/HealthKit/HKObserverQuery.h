@class NSString;

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface>

@property (readonly, nonatomic) id /* block */ updateHandler;
@property (nonatomic) BOOL observeUnfrozenSeries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (void)_validateAndRaiseExceptionIfNeeded:(id)a0;
- (void)client_dataUpdatedInDatabaseForTypes:(id)a0 withAnchor:(id)a1 query:(id)a2;
- (id)initWithQueryDescriptors:(id)a0 updateHandler:(id /* block */)a1;
- (id)initWithSampleType:(id)a0 predicate:(id)a1 updateHandler:(id /* block */)a2;

@end
