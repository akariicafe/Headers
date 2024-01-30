@class NSMutableSet, NSMutableDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    int _lock;
}

@property (readonly, nonatomic) NSMutableSet *pendingLogLocations;
@property (readonly, nonatomic) NSMutableSet *scheduledLogLocations;
@property (readonly, nonatomic) NSMutableSet *failedLogLocations;
@property (readonly, nonatomic) NSMutableSet *ignoredLogLocations;
@property (readonly, nonatomic) NSMutableDictionary *logLocationsToEncounteredErrors;

- (id)init;
- (void)dealloc;
- (void)transactionLogAtLocationWasIgnored:(id)a0;
- (void)transactionLogAtLocation:(id)a0 failedToOpenWithError:(id)a1;
- (void)transactionLogAtLocationWasScheduled:(id)a0;
- (id)description;
- (void)addPendingLogLocation:(id)a0;
- (void)addPendingLogLocations:(id)a0;
- (id)initWithPendingLogLocations:(id)a0;
- (void)failedTransactionLogAtLocationRecovered:(id)a0;
- (void)unionWithSchedulingContext:(id)a0;

@end
