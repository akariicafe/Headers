@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {
    NSMutableDictionary *_iterationDurations;
    NSMutableDictionary *_iterationLocationCounts;
    NSMutableDictionary *_iterationLocationIntervals;
    NSMutableDictionary *_iterationMaxLocationOutageIntervals;
    NSMutableDictionary *_iterationVistCount;
    NSDate *_startDate;
}

- (unsigned long long)maxLocationCountForDirection:(id)a0;
- (double)cumulativeLocationIntervalForDirection:(id)a0;
- (unsigned long long)cumulativeLocationCountForDirection:(id)a0;
- (unsigned long long)lastLocationCountForDirection:(id)a0;
- (unsigned long long)lastLocationCount;
- (double)maxProcessingDuration;
- (void)stopIterationWithVisitClusters:(id)a0;
- (unsigned long long)maxVisitCountForDirection:(id)a0;
- (void)setLocationIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (double)maxLocationIntervalForDirection:(id)a0;
- (void)setMaxLocationOutageIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (double)lastMaxLocationOutageIntervalForDirection:(id)a0;
- (double)cumulativeMaxLocationOutageIntervalForDirection:(id)a0;
- (unsigned long long)cumulativeVisitCountForDirection:(id)a0;
- (double)maxLocationOutageIntervalForDirection:(id)a0;
- (id)init;
- (unsigned long long)lastVisitCountForDirection:(id)a0;
- (id)description;
- (void)setLocationCountForVisitCluster:(id)a0 direction:(id)a1;
- (void)setVisitCountForVisitCluster:(id)a0 direction:(id)a1;
- (void).cxx_destruct;
- (void)startIterationWithVisitClusters:(id)a0;
- (double)lastProcessingDuration;
- (double)lastLocationIntervalForDirection:(id)a0;
- (double)cumulativeProcessingDuration;

@end
