@class NSDictionary, NSString;

@interface _HKCurrentActivitySummaryQuery : HKQuery <HKCurrentActivitySummaryQueryClientInterface> {
    id /* block */ _updateHandler;
}

@property (copy, nonatomic, getter=_collectionIntervals, setter=_setCollectionIntervals:) NSDictionary *collectionIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverActivitySummaries:(id)a0 queryUUID:(id)a1;

@end
