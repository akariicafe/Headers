@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface>

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (void)client_deliverDateIntervals:(id)a0 forQuery:(id)a1;
- (id)initWithDateIntervalHandler:(id /* block */)a0;

@end
