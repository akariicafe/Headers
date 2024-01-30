@class NSString, NSDateComponents, NSDate;

@interface _HKActivityStatisticsQuery : HKQuery <HKActivityStatisticsQueryClientInterface> {
    BOOL _deliveredInitial;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
}

@property (copy, nonatomic) id /* block */ initialQueryResultsHandler;
@property (nonatomic, getter=_updateInterval, setter=_setUpdateInterval:) double updateInterval;
@property (copy, nonatomic) id /* block */ queryUpdateHandler;
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
- (void)client_deliverResult:(id)a0 query:(id)a1;
- (void)_validateIntervalComponents:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 moveIntervalComponents:(id)a2 exerciseIntervalComponents:(id)a3 initialQueryResultsHandler:(id /* block */)a4;
- (void)queue_deliverError:(id)a0;

@end
