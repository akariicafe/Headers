@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface> {
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (id)initWithDateIntervalHandler:(id /* block */)a0;
- (void)client_deliverDateIntervals:(id)a0 forQuery:(id)a1;
- (void)queue_deliverError:(id)a0;
- (id)initWithHandler:(id /* block */)a0;

@end
