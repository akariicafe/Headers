@class NSMutableArray;

@interface MovingAverage : NSObject {
    long long _arraySize;
    NSMutableArray *_values;
    float _currentAverage;
}

- (float)add:(float)a0;
- (id)initWithSize:(long long)a0;
- (void).cxx_destruct;
- (float)getAvg;

@end
