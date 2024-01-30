@class NSDictionary, NSString;

@interface _HKCurrentActivitySummaryQuery : HKQuery <HKCurrentActivitySummaryQueryClientInterface> {
    id /* block */ _updateHandler;
}

@property (copy, nonatomic, getter=_collectionIntervals, setter=_setCollectionIntervals:) NSDictionary *collectionIntervals;
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
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)client_deliverActivitySummaries:(id)a0 queryUUID:(id)a1;
- (void)queue_deliverError:(id)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;

@end
