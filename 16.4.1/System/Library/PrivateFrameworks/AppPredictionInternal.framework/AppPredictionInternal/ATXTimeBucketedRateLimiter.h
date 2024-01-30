@class NSDate;

@interface ATXTimeBucketedRateLimiter : NSObject {
    unsigned long long _maxCount;
    double _period;
    NSDate *_endOfCurrentBucket;
    unsigned long long _countForCurrentBucket;
}

@property (retain, nonatomic) NSDate *now;

- (BOOL)tryToIncrementCountAndReturnSuccess;
- (void)_resetBucketIfNeeded;
- (id)initWithMaxCount:(unsigned long long)a0 perPeriod:(double)a1;
- (void).cxx_destruct;

@end
