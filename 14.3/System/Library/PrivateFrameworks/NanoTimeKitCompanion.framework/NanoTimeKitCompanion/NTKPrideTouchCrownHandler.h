@interface NTKPrideTouchCrownHandler : NSObject {
    unsigned long long _touchIndex;
    void /* unknown type, empty encoding */ _touchCoords[10];
    float _touchTimes[10];
    int _previousCrownIndex;
    double _previousCrownOffset;
    float _strumCurve[15];
    float *_strumAmplitudes;
    float *_strumTargets;
    int _numSplines;
    BOOL _isCyclical;
    float _strumSpeed;
    int _strumPad;
}

- (void)dealloc;
- (void)clearTouches;
- (id)initWithNumSplines:(int)a0 strumWidth:(float)a1 strumSpeed:(float)a2 isCyclical:(BOOL)a3 padding:(int)a4;
- (float)strumAmplitudeForSpline:(int)a0;
- (void)startWaveAtX:(float)a0 y:(float)a1 atTime:(double)a2;
- (void)_generateStrumCurveWithWidth:(float)a0;
- (void)_strumToCyclicalIndex:(int)a0 withVelocity:(double)a1;
- (void)_strumToLinearIndex:(int)a0 withVelocity:(double)a1;
- (void)strumToOffset:(double)a0 withVelocity:(double)a1;
- (void)setPreviousCrownIndex:(int)a0;
- (void)iterateTouchesWithBlock:(id /* block */)a0;
- (void)fadeStrumByAmount:(float)a0;

@end
