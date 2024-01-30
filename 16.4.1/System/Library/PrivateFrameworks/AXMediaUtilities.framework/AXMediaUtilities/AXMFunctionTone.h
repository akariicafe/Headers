@interface AXMFunctionTone : AXMTone

@property (readonly, nonatomic) id /* block */ function;
@property (readonly, nonatomic) struct { double *values; double scaleMinimum; double scaleMaximum; double valueMinimum; double valueMaximum; double count; } xAxisDescriptor;
@property (readonly, nonatomic) struct { double *values; double scaleMinimum; double scaleMaximum; double valueMinimum; double valueMaximum; double count; } yAxisDescriptor;

- (void).cxx_destruct;
- (double)_xAxisValueForNormalizedPosition:(double)a0;
- (id)initWithUnivariateFunction:(id /* block */)a0 sampleRate:(double)a1 envelope:(id)a2 xAxisDescriptor:(struct { double *x0; double x1; double x2; double x3; double x4; double x5; })a3 yAxisDescriptor:(struct { double *x0; double x1; double x2; double x3; double x4; double x5; })a4;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1;

@end
