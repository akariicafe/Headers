@class NSString, NSDictionary, NSMutableDictionary, NSData, NSDate, HKQuantitySample;

@interface HKQuantitySeriesSampleQuery : HKQuery <HKQuantitySeriesSampleQueryClientInterface> {
    id /* block */ _seriesHandler;
    HKQuantitySample *_sample;
    long long _anchor;
    double _startTime;
    id /* block */ _quantityHandler;
    id /* block */ _quantityBatchHandler;
    NSMutableDictionary *_receivedSamplesByUUID;
    BOOL _hasMaximumReceivedStartTime;
    double _maximumReceivedStartTime;
    NSData *_latestReceivedUUIDData;
    NSDate *_latestSampleStartDate;
}

@property (readonly, nonatomic) NSDictionary *unitTest_cachedQuantitySamplesByUUID;
@property (readonly, nonatomic) id /* block */ quantityHandlerWithoutSample;
@property (readonly, nonatomic) id /* block */ quantityHandlerWithSample;
@property (nonatomic) BOOL includeSample;
@property (nonatomic) BOOL orderByQuantitySampleStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (id)initWithSample:(id)a0 quantityHandler:(id /* block */)a1;
- (id)_quantitySampleForEnumerationResult:(id)a0 UUID:(id)a1;
- (void)client_deliverEnumerationResults:(id)a0 isFinal:(BOOL)a1 query:(id)a2;
- (void)client_deliverQuantitySeries:(id)a0 seriesAnchor:(long long)a1 isFinal:(BOOL)a2 query:(id)a3;
- (id)initWithQuantityType:(id)a0 predicate:(id)a1 quantityBatchHandler:(id /* block */)a2;
- (id)initWithQuantityType:(id)a0 predicate:(id)a1 quantityHandler:(id /* block */)a2;

@end
