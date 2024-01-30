@class NSString, NSMutableDictionary;

@interface NetworkQualityExecutionsReporter : NSObject {
    NSMutableDictionary *reporters;
}

@property (retain) NSString *remoteMeasurementEndpoint;

- (void).cxx_destruct;
- (void)addDetailedReportType:(int)a0;
- (void)reportExecutionResults:(id)a0 withConfiguration:(id)a1;

@end
