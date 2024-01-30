@class HKQuantity, NSString, NSDateComponents, NSDate;

@interface _HKQuantityDistributionQuery : HKQuery <HKQuantityDistributionQueryClientInterface>

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long contextStyle;
@property (readonly, nonatomic) NSDate *anchorDate;
@property (readonly, nonatomic) NSDateComponents *intervalComponents;
@property (readonly, nonatomic) HKQuantity *histogramAnchor;
@property (readonly, nonatomic) HKQuantity *histogramBucketSize;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_deliverError:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 endDate:(id)a2 contextStyle:(long long)a3 predicate:(id)a4 anchorDate:(id)a5 intervalComponents:(id)a6 histogramAnchor:(id)a7 histogramBucketSize:(id)a8 options:(unsigned long long)a9 completionHandler:(id /* block */)a10;
- (void)client_deliverDistributionCollection:(id)a0 forQuery:(id)a1;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;

@end
