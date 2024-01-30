@class NSString, NSDateInterval;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface> {
    BOOL _requireQuantityType;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long mergeStrategy;
@property (retain, nonatomic, getter=_dateInterval, setter=_setDateInterval:) NSDateInterval *dateInterval;
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
- (id)_filterForDateInterval:(id)a0;
- (id)initWithQuantityType:(id)a0 quantitySamplePredicate:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)client_deliverStatistics:(id)a0 forQuery:(id)a1;
- (void)queue_deliverError:(id)a0;
- (id)_filter;
- (id)initWithSampleType:(id)a0 samplePredicate:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
