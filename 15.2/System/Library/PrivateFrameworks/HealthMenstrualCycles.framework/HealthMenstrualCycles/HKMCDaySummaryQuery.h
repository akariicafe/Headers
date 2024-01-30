@class NSString, NSMutableArray;

@interface HKMCDaySummaryQuery : HKQuery <HKMCDaySummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}

@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })a0 ascending:(BOOL)a1 limit:(long long)a2 resultsHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverDaySummaries:(id)a0 clearPending:(BOOL)a1 isFinalBatch:(BOOL)a2 analysisAnchor:(id)a3 queryUUID:(id)a4;

@end
