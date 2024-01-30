@class NSArray, NSString;

@interface HKVerifiableClinicalRecordQuery : HKQuery <HKVerifiableClinicalRecordQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly, copy) NSArray *recordTypes;
@property (readonly, copy) NSArray *sourceTypes;
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
- (void)queue_validate;
- (void).cxx_destruct;
- (void)client_deliverVerifiableClinicalRecords:(id)a0 queryUUID:(id)a1;
- (id)initWithRecordTypes:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;
- (id)initWithRecordTypes:(id)a0 sourceTypes:(id)a1 predicate:(id)a2 resultsHandler:(id /* block */)a3;

@end
