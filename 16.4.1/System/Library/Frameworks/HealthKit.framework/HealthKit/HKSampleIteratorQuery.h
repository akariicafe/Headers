@class HKSampleIteratorQueryCursor, NSString, NSMutableArray;

@interface HKSampleIteratorQuery : HKQuery <HKSampleIteratorQueryClientInterface> {
    NSMutableArray *_samplesPendingDelivery;
}

@property (copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor;
@property (nonatomic) unsigned long long limit;
@property (readonly, copy, nonatomic) id /* block */ resultsHandler;
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
- (void)client_deliverSampleObjects:(id)a0 queryCursor:(id)a1 deliverResults:(BOOL)a2 query:(id)a3;
- (id)init;
- (void)queue_validate;
- (id)initWithQueryCursor:(id)a0 limit:(unsigned long long)a1 resultsHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithQueryDescriptors:(id)a0 sortDescriptors:(id)a1 followingAnchor:(id)a2 upToAndIncludingAnchor:(id)a3 distinctByKeyPaths:(id)a4 limit:(unsigned long long)a5 resultsHandler:(id /* block */)a6;

@end
