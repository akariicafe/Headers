@class CMStepCounterProxy;

@interface CMStepCounter : NSObject

@property (readonly, nonatomic) CMStepCounterProxy *stepcounterProxy;
@property BOOL enabled;

+ (BOOL)isStepCountingAvailable;

- (id)init;
- (void)queryStepCountStartingFrom:(id)a0 to:(id)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)stopStepCountingUpdates;
- (void)deleteHistory;
- (void)startStepCountingUpdatesToQueue:(id)a0 updateOn:(long long)a1 withHandler:(id /* block */)a2;
- (void)getTotalCountToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)dealloc;

@end
