@class NSDateComponents, NSString, NSMutableArray, NSDate, NSNumber, HKStatisticsCollection;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface> {
    NSMutableArray *_results;
    BOOL _hasReceivedInitialResults;
    BOOL _requireQuantityType;
}

@property (retain) NSNumber *lastAnchor;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) NSDate *anchorDate;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (copy, nonatomic) id /* block */ initialResultsHandler;
@property (copy, nonatomic) id /* block */ statisticsUpdateHandler;
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
- (void)queue_deliverError:(id)a0;
- (void)client_deliverUpdatedStatistics:(id)a0 anchor:(id)a1 query:(id)a2;
- (id)initWithSampleType:(id)a0 samplePredicate:(id)a1 options:(unsigned long long)a2 anchorDate:(id)a3 intervalComponents:(id)a4;
- (void)client_deliverStatisticsBatch:(id)a0 resetStatistics:(BOOL)a1 isFinal:(BOOL)a2 anchor:(id)a3 query:(id)a4;
- (void)_queue_deliverStatisticsObjects:(id)a0 forQuery:(id)a1;
- (void)_queue_deliverInitialStatisticsObjects:(id)a0 anchor:(id)a1 queryUUID:(id)a2;
- (void)_queue_deliverResetStatisticsObjects:(id)a0 forQuery:(id)a1;
- (id)initWithQuantityType:(id)a0 quantitySamplePredicate:(id)a1 options:(unsigned long long)a2 anchorDate:(id)a3 intervalComponents:(id)a4;

@end
