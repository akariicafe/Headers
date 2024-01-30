@class NSString, NSMutableArray;

@interface HKSleepDaySummaryQuery : HKQuery <HKSleepDaySummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}

@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) BOOL requireSleepAnalysis;
@property (readonly, nonatomic) BOOL onlySleepAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (id)initWithMorningIndexRange:(struct { long long x0; long long x1; })a0 ascending:(BOOL)a1 limit:(long long)a2 requireSleepAnalysis:(BOOL)a3 resultsHandler:(id /* block */)a4;
- (void)queue_deliverError:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)client_deliverDaySummaries:(id)a0 clearPending:(BOOL)a1 isFinalBatch:(BOOL)a2 queryUUID:(id)a3;
- (void).cxx_destruct;
- (id)initWithMorningIndexRange:(struct { long long x0; long long x1; })a0 ascending:(BOOL)a1 limit:(long long)a2 requireSleepAnalysis:(BOOL)a3 onlySleepAnalysis:(BOOL)a4 resultsHandler:(id /* block */)a5;
- (void)queue_populateConfiguration:(id)a0;

@end
