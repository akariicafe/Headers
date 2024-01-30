@class NSString, NSMutableString, SDRDiagnosticReporter, NSMutableArray;

@interface WiFiSoftError : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long enabled;
@property (nonatomic) long long metricsEnabled;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSMutableArray *occurrenceTimestamps;
@property (retain, nonatomic) NSMutableString *logMessage;
@property (retain, nonatomic) NSString *metricEventName;
@property (retain, nonatomic) SDRDiagnosticReporter *abcReporter;
@property (nonatomic) NSString *hudOffset;
@property (retain, nonatomic) NSMutableArray *abcSubmissionTimestamps;
@property (retain, nonatomic) NSMutableArray *simulateCrashTimestamps;
@property (retain, nonatomic) NSMutableArray *hudTimestamps;
@property (retain, nonatomic) NSMutableArray *askToLaunchTapToRadarTimestamps;
@property (retain, nonatomic) NSMutableArray *tapToRadarTimestamps;
@property (readonly, nonatomic) long long maxOccurrences;
@property (readonly, nonatomic) long long metricSubmissionSamplingRate;
@property (readonly, nonatomic) long long maxNonUIActions;
@property (readonly, nonatomic) long long intervalForMaxNonUIActions;
@property (readonly, nonatomic) long long maxUIActions;
@property (readonly, nonatomic) long long intervalForMaxUIActions;
@property (readonly, nonatomic) long long maxLogMessageLength;

+ (void)_cloudAssetsFetchHandler:(id)a0;
+ (void)_submitSummaryReportMetric;
+ (void)_updateHUDWithMessage:(id)a0;

- (void)resetCount;
- (void)writeLogMessage;
- (long long)_countOf:(id)a0 withinInterval:(double)a1;
- (long long)recentCountWithinTimeInterval:(double)a0;
- (id)submitMetricWithData:(id)a0;
- (id)incrementCount;
- (id)submitABCReportWithReason:(id)a0;
- (BOOL)_maxUIActionsReachedFor:(id)a0;
- (void)clearLogMessage;
- (id)updateHUDWithMessage:(id)a0;
- (id)submitMetric;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)tapToRadarWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)askToLaunchTapToRadarWithMessage:(id)a0;
- (id)initWithName:(id)a0 andParams:(id)a1;
- (long long)count;
- (id)appendLogMessage:(id)a0 includeTimestamp:(BOOL)a1;
- (void)dealloc;
- (void)_addGenericMetricData:(id)a0;
- (BOOL)_maxNonUIActionsReachedFor:(id)a0;
- (void)_recordCurrentTimestampIn:(id)a0;
- (id)simulateCrashWithReason:(id)a0;

@end
