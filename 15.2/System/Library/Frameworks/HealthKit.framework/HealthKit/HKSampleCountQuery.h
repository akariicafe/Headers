@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly, copy, nonatomic) NSSet *sampleTypes;
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
- (id)initWithSampleType:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithQueryDescriptors:(id)a0 resultsHandler:(id /* block */)a1;
- (void)client_deliverSampleCountDictionary:(id)a0 forQuery:(id)a1;
- (void)queue_populateConfiguration:(id)a0;
- (id)initWithSampleTypes:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;

@end
