@interface ATMovingAverage : NSObject {
    double *_values;
    unsigned long long _count;
    unsigned long long _index;
}

@property (readonly, nonatomic) unsigned long long window;
@property (readonly, nonatomic) double average;

- (id)initWithWindow:(unsigned long long)a0;
- (void)update:(double)a0;
- (void)dealloc;
- (void)reset;

@end
