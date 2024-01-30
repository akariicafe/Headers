@class NSArray, NSString;

@interface HKVerifiableClinicalRecordQuery : HKQuery <HKVerifiableClinicalRecordQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly, copy) NSArray *recordTypes;
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
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverVerifiableClinicalRecords:(id)a0 queryUUID:(id)a1;
- (id)initWithRecordTypes:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;

@end
