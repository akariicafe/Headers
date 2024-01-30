@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {
    NSMutableDictionary *_iterationDurations;
    NSMutableDictionary *_iterationLocationCounts;
    NSMutableDictionary *_iterationLocationIntervals;
    NSMutableDictionary *_iterationMaxLocationOutageIntervals;
    NSMutableDictionary *_iterationVistCount;
    NSDate *_startDate;
}

- (double)maxLocationIntervalForDirection:(id)a0;
- (unsigned long long)lastLocationCount;
- (double)cumulativeLocationIntervalForDirection:(id)a0;
- (void)setMaxLocationOutageIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (double)lastProcessingDuration;
- (unsigned long long)maxVisitCountForDirection:(id)a0;
- (unsigned long long)cumulativeLocationCountForDirection:(id)a0;
- (id)description;
- (void)startIterationWithVisitClusters:(id)a0;
- (void)setLocationCountForVisitCluster:(id)a0 direction:(id)a1;
- (double)lastLocationIntervalForDirection:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)maxLocationCountForDirection:(id)a0;
- (id)init;
- (double)maxProcessingDuration;
- (unsigned long long)lastVisitCountForDirection:(id)a0;
- (double)lastMaxLocationOutageIntervalForDirection:(id)a0;
- (void)stopIterationWithVisitClusters:(id)a0;
- (void)setLocationIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (void)setVisitCountForVisitCluster:(id)a0 direction:(id)a1;
- (double)maxLocationOutageIntervalForDirection:(id)a0;
- (unsigned long long)lastLocationCountForDirection:(id)a0;
- (unsigned long long)cumulativeVisitCountForDirection:(id)a0;
- (double)cumulativeMaxLocationOutageIntervalForDirection:(id)a0;
- (double)cumulativeProcessingDuration;

@end
