@class HDDaemon;

@interface HDAutoBugCaptureReporter : NSObject

@property (copy, nonatomic) id /* block */ unitTesting_didReportHandler;
@property (readonly, weak, nonatomic) HDDaemon *daemon;

+ (void)reportNotFinalSeriesSampleWithClass:(Class)a0 count:(long long)a1 datumCount:(long long)a2 reason:(id)a3;

- (id)initWithDaemon:(id)a0;
- (void)reportMissingSource:(id)a0 duringSyncFromStore:(id)a1;
- (void).cxx_destruct;
- (void)reportCorruptionForDatabase:(id)a0 resultCode:(int)a1;
- (void)reportQueryDurationWithServer:(id)a0 dataCount:(long long)a1 duration:(double)a2;
- (void)reportSummarySharingInvitationFailureForOperation:(id)a0 error:(id)a1;
- (void)reportDatabaseMigrationFailureWithContext:(id)a0;
- (void)reportDataCollectionSeriesProblem:(id)a0 quantityType:(id)a1;

@end
