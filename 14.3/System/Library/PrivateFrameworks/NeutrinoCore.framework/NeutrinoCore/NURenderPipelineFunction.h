@interface NURenderPipelineFunction : NSObject

+ (id)functionWithEvaluationBlock:(id /* block */)a0;
+ (id)scaleMultiplyOfScalar:(double)a0;
+ (id)scaledVector:(id)a0;
+ (id)sharpnessWithIntensity:(double)a0;
+ (id)redEyeSpotsWithCorrectionInfo:(id)a0;
+ (id)grainInputSeedFromFrameTime;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)nu_evaluateWithPipelineState:(id)a0 error:(out id *)a1;

@end
