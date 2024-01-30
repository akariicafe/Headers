@class NSMutableArray;

@interface WBSHistoryActivityThrottler : NSObject {
    NSMutableArray *_activityTimes;
}

@property (nonatomic) unsigned long long activityLimitPerSecond;

- (void).cxx_destruct;
- (BOOL)shouldRecordHistoryVisitAtTime:(double)a0;
- (id)initWithLimitPerSecond:(unsigned long long)a0;

@end
