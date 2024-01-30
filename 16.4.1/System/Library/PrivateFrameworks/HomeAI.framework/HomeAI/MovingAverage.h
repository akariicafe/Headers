@class NSMutableArray;

@interface MovingAverage : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *queue;
@property (readonly, nonatomic) unsigned long long windowSize;
@property double movingAverage;

- (id)initWithWindowSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addNumber:(id)a0;
- (double)movingAverageForInterval:(double)a0 defaultValue:(double)a1;

@end
