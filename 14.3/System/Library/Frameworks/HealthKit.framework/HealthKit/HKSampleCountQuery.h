@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly, copy, nonatomic) NSSet *sampleQueryDescriptions;
@property (readonly, copy, nonatomic) NSSet *sampleTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;

- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithSampleQueryDescriptions:(id)a0 resultsHandler:(id /* block */)a1;
- (id)initWithSampleTypes:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;
- (void)client_deliverSampleCountDictionary:(id)a0 forQuery:(id)a1;
- (id)initWithSampleType:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;
- (void)queue_deliverError:(id)a0;

@end
