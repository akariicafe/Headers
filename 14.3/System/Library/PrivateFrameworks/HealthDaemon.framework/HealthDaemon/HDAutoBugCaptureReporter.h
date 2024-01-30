@class HDDaemon;

@interface HDAutoBugCaptureReporter : NSObject

@property (copy, nonatomic) id /* block */ unitTesting_didReportHandler;
@property (readonly, weak, nonatomic) HDDaemon *daemon;

+ (void)reportNotFinalSeriesSampleWithClass:(Class)a0 count:(long long)a1 datumCount:(long long)a2 reason:(id)a3;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (void)reportDataCollectionSeriesProblem:(id)a0 quantityType:(id)a1;
- (void)reportDatabaseMigrationFailureWithContext:(id)a0;
- (void)reportQueryDurationWithServer:(id)a0 dataCount:(long long)a1 duration:(double)a2;
- (void)_reportSnapshotWithType:(id)a0 subType:(id)a1 context:(id)a2 processIdentifier:(id)a3 thresholdValues:(id)a4;

@end
