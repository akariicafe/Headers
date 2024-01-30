@interface MKProgress : NSObject {
    unsigned long long _totalOperationCount;
    unsigned long long _completedOperationCount;
    double _startTime;
}

- (float)progress:(unsigned long long *)a0;
- (void)addCompletedOerationCount:(unsigned long long)a0;
- (void)addTotalOperationCount:(unsigned long long)a0;
- (unsigned long long)totalOperationCount;

@end
