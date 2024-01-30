@class NSDate, WLSourceDeviceMigrationMetadata, WLTimeEstimateAccuracyTracker, NSArray, WLSourceDevice, WLPayload, WLSQLController, WLURLSessionController, NSMutableArray, WLStatistics, WLMigrationDataCoordinator;
@protocol WLDataMigrationDelegate, WLMigrationDataSource;

@interface WLMigrationContext : NSObject

@property (retain, nonatomic) WLSourceDevice *sourceDevice;
@property (retain, nonatomic) id<WLDataMigrationDelegate> delegate;
@property (nonatomic) const void *powerAssertion;
@property (retain, nonatomic) id<WLMigrationDataSource> dataSource;
@property (retain, nonatomic) WLMigrationDataCoordinator *dataCoordinator;
@property (retain, nonatomic) WLSQLController *sqlController;
@property (retain, nonatomic) NSMutableArray *migrators;
@property (nonatomic) unsigned long long expectedDownloadSegmentsRemaining;
@property (nonatomic) unsigned long long completedDownloadSegmentCount;
@property (nonatomic) unsigned long long expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
@property (nonatomic) unsigned long long expectedDownloadBytesRemainingForItemsWithConcreteSizes;
@property (nonatomic) double progress;
@property (nonatomic) double lastProgressSentToAndroidDevice;
@property (retain, nonatomic) NSDate *lastProgressSentDate;
@property (retain, nonatomic) NSDate *throughputSegmentStartDate;
@property (retain, nonatomic) NSMutableArray *throughputSamples;
@property (nonatomic) unsigned long long throughputBytesInCurrentPeriod;
@property (nonatomic) unsigned long long throughputSegmentsInCurrentPeriod;
@property (retain, nonatomic) WLTimeEstimateAccuracyTracker *timeEstimateAccuracyTracker;
@property (retain, nonatomic) WLURLSessionController *urlSessionController;
@property (retain, nonatomic) WLStatistics *aggregateStatistics;
@property (retain, nonatomic) WLSourceDeviceMigrationMetadata *metadata;
@property (retain, nonatomic) NSArray *importErrors;
@property (retain, nonatomic) WLPayload *payload;

- (id)init;
- (void).cxx_destruct;

@end
