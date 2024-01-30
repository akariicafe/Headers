@interface HDSharedSummaryTransactionQueryServer : HDQueryServer <HDSharedSummaryManagerObserver>

+ (Class)queryClass;

- (void)_queue_start;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)a0;
- (void)_queue_didDeactivate;

@end
