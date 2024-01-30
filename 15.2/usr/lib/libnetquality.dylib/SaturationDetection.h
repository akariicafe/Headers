@class NSMutableArray;

@interface SaturationDetection : NSObject {
    long long _arraySize;
    NSMutableArray *_values;
    int state;
    float _previousAverage;
    float _currentAverage;
    float _saturationValue;
}

- (BOOL)add:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (float)getSaturation;
- (float)getAverage;
- (id)initWithAverageSpan:(long long)a0;

@end
