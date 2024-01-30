@interface NUAlphaHistogramCalculator : NUHistogramCalculator

@property (nonatomic) struct { float r; float g; float b; float a; } luminanceWeights;
@property (nonatomic) struct { float r; float g; float b; float a; } luminanceThresholds;

- (id)init;
- (id)computeHistogramFromBuffer:(id)a0 error:(out id *)a1;
- (id)_computeAlphaHistogramForBufferBGRA8:(id)a0 error:(out id *)a1;

@end
