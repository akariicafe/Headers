@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface> {
    NSDateComponents *_statisticsIntervalComponents;
}

@property (copy, nonatomic) id /* block */ updateHandler;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (void)client_deliverQueryResult:(id)a0 queryUUID:(id)a1;
- (id)initWithStatisticsIntervalComponents:(id)a0 updateHandler:(id /* block */)a1;

@end
