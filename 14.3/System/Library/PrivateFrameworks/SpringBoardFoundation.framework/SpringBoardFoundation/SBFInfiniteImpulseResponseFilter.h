@interface SBFInfiniteImpulseResponseFilter : NSObject {
    unsigned long long _count;
    double *_ffC;
    double *_fbC;
    double *_inputHistory;
    double *_outputHistory;
}

@property (nonatomic) double zeroGradientThreshold;

+ (id)lowpassInertiaFilterWithCoefficient:(double)a0;
+ (id)lowpassFilterWithCoefficient:(double)a0;

- (void)dealloc;
- (double)output;
- (double)outputGradient;
- (BOOL)zeroGradient;
- (double)filterWithInput:(double)a0;
- (id)initWithCount:(unsigned long long)a0 feedforwardCoefficients:(double *)a1 feedbackCoefficients:(double *)a2;
- (void)setLowpassInertiaFilterCoefficient:(double)a0;
- (void)resetToValue:(double)a0;

@end
