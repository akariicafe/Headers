@class NSArray, NSLock, NSDate;

@interface ASDUpdateMetricsStore : NSObject {
    NSLock *_lock;
}

@property (readonly, nonatomic) double averagePollTime;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly, nonatomic) NSDate *lastAutoPollDate;

+ (void)_setUpdateMetrics:(id)a0;
+ (id)_updateMetrics;

- (void).cxx_destruct;
- (id)init;
- (void)addPoll:(id)a0;
- (void)synchronize;
- (void)_load;
- (id)_serialableData;

@end
