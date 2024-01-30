@class NSArray, NSString;

@interface HKDocumentQuery : HKQuery <HKDocumentQueryClientInterface>

@property (copy, nonatomic) id /* block */ resultsHandler;
@property (readonly) unsigned long long limit;
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) BOOL includeDocumentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (void)client_deliverDocument:(id)a0 query:(id)a1;
- (id)initWithDocumentType:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 includeDocumentData:(BOOL)a4 resultsHandler:(id /* block */)a5;

@end
