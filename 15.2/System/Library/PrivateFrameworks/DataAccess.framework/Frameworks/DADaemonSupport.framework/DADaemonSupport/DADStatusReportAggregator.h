@class NSMutableDictionary;

@interface DADStatusReportAggregator : NSObject {
    int _numOutstandingReports;
    id /* block */ _completionBlock;
    NSMutableDictionary *_persistentUUIDToStatusReport;
    BOOL _finished;
}

- (void).cxx_destruct;
- (void)noteAdditionalReportDicts:(id)a0;
- (void)_coalesceAndReport;
- (id)initWithStatusReports:(id)a0 numOutstandingReports:(int)a1 timeout:(double)a2 completionBlock:(id /* block */)a3;

@end
