@class MovingAverage;

@interface SaturationDetection : NSObject {
    MovingAverage *_movingAvg;
    MovingAverage *_instAvg;
    long long _instValues;
    int state;
    float _previousAverage;
    float _currentAverage;
    float _saturationValue;
}

- (BOOL)add:(float)a0;
- (id)init;
- (void).cxx_destruct;
- (float)getAverage;
- (float)getSaturation;

@end
