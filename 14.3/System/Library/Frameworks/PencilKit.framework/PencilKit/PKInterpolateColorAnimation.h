@class UIColor;

@interface PKInterpolateColorAnimation : NSObject {
    double _sourceRGBA[4];
    double _destRGBA[4];
    double _startTime;
    double _duration;
    UIColor *_endColorFallback;
}

- (void).cxx_destruct;
- (id)colorAtTime:(double)a0;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 startTime:(double)a2 duration:(double)a3;
- (BOOL)isDoneAtTime:(double)a0;

@end
