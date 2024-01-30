@class HMFUnfairLock, NSMutableArray;

@interface MovingAverage : NSObject

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (retain, nonatomic) NSMutableArray *queue;
@property (readonly, nonatomic) unsigned long long windowSize;
@property double movingAverage;

- (void).cxx_destruct;
- (id)initWithWindowSize:(unsigned long long)a0;
- (void)addNumber:(id)a0;
- (double)movingAverageForInterval:(double)a0 defaultValue:(double)a1;

@end
