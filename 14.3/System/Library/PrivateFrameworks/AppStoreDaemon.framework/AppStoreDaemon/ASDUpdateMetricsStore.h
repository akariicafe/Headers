@class NSArray, NSLock, NSDate;

@interface ASDUpdateMetricsStore : NSObject {
    NSLock *_lock;
}

@property (readonly, nonatomic) double averagePollTime;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly, nonatomic) NSDate *lastAutoPollDate;

+ (void)_setUpdateMetrics:(id)a0;
+ (id)_updateMetrics;

- (id)init;
- (void).cxx_destruct;
- (void)_load;
- (void)synchronize;
- (id)_serialableData;
- (void)addPoll:(id)a0;

@end
