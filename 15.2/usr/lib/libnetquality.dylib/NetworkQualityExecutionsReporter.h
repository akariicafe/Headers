@class NSString, NSArray, NSURL, NSDate, NSMutableDictionary;

@interface NetworkQualityExecutionsReporter : NSObject {
    NSMutableDictionary *reporters;
}

@property (retain) NSString *applicationId;
@property (retain) NSString *subnet;
@property (retain) NSString *remoteMeasurementEndpoint;
@property (retain) NSString *environment;
@property (retain) NSString *version;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (readonly, getter=getEnabledReportTypes) NSArray *enabledReportTypes;
@property (retain) NSURL *reportingURL;
@property BOOL produceDetailedReport;
@property BOOL produceVerboseReport;

- (void).cxx_destruct;
- (void)reportExecutionResults:(id)a0 withSummary:(id)a1;
- (void)addDetailedReportType:(int)a0;
- (void)removeDetailedReportType:(int)a0;
- (void)reportExecutionResults:(id)a0 withError:(id)a1;

@end
