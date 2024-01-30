@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface> {
    NSDateComponents *_statisticsIntervalComponents;
}

@property (copy, nonatomic) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;

- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)client_deliverQueryResult:(id)a0 queryUUID:(id)a1;
- (id)initWithStatisticsIntervalComponents:(id)a0 updateHandler:(id /* block */)a1;
- (void)queue_deliverError:(id)a0;

@end
