@class NSString, NSMutableArray;

@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface> {
    BOOL _initialHandlerCalled;
    id /* block */ _completionHandler;
    NSMutableArray *_pendingActivitySummaries;
}

@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (void)client_deliverActivitySummaries:(id)a0 isFinalBatch:(BOOL)a1 clearPendingBatches:(BOOL)a2 queryUUID:(id)a3;
- (id)initWithPredicate:(id)a0 resultsHandler:(id /* block */)a1;
- (void)setShouldIncludePrivateActivitySummaryProperties:(BOOL)a0;

@end
