@interface RTTokenBucket : NSObject {
    double _fillRate;
    double _capacity;
    double _operationCost;
    double _tokenBucket;
    double _lastArrivalTime;
    double _totalInterArrivalTime;
    double _wastedTokens;
    double _totalTokensGenerated;
    double _totalTokensConsumed;
    unsigned long long _totalOperations;
    unsigned long long _operationsAllowed;
}

@property (nonatomic) double lastBucketFill;
@property (nonatomic) double interArrivalTime;

- (BOOL)operationAllowedWithCost:(double)a0;
- (double)timeIntervalUntilOperationAllowed;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)a0;
- (BOOL)_consumeTokens:(unsigned long long)a0;
- (id)dumpStatistics;
- (unsigned long long)countOfOperationsAllowed;
- (id)init;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)a0;
- (BOOL)operationAllowed;
- (id)initWithFillRate:(double)a0 capacity:(double)a1 initialAllocation:(double)a2;
- (id)initWithFillRate:(double)a0 capacity:(double)a1;
- (void)reset;
- (void)_replenishTokens;

@end
