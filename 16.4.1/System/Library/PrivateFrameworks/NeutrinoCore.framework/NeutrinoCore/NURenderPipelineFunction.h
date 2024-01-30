@interface NURenderPipelineFunction : NSObject

+ (id)grainInputSeedFromFrameTime;
+ (id)redEyeSpotsWithCorrectionInfo:(id)a0;
+ (id)scaleMultiplyOfScalar:(double)a0;
+ (id)scaledVector:(id)a0;
+ (id)sharpnessWithIntensity:(double)a0;
+ (id)functionWithEvaluationBlock:(id /* block */)a0;

- (id)evaluate:(id)a0 error:(out id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)nu_evaluateWithPipelineState:(id)a0 error:(out id *)a1;

@end
