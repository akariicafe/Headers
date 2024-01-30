@class NSMutableDictionary;

@interface _DBAnalyticsTimeAccumulator : NSObject

@property (retain, nonatomic) NSMutableDictionary *dateStorage;
@property (retain, nonatomic) NSMutableDictionary *accumulatedTimeStorage;

- (id)init;
- (void).cxx_destruct;
- (double)accumulatedTimeForKey:(id)a0;
- (BOOL)isAccumulatingTimeForAnyKey;
- (BOOL)isAccumulatingTimeForKey:(id)a0;
- (void)startCountingTimeForKey:(id)a0;
- (void)stopCountingTimeForAllKeys;
- (void)stopCountingTimeForKey:(id)a0;

@end
