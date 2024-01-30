@class NSString, NSURL, NSDate, SNRecordOperator, NSMutableArray;

@interface SNUltronReportOperator : NSObject <SNOperator> {
    SNRecordOperator *_recordOperator;
    NSURL *_destinationDirectory;
    NSDate *_date;
    NSString *_requestDescription;
    NSString *_buildVersion;
    NSMutableArray *_detectionResults;
}

- (id)init;
- (void).cxx_destruct;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
