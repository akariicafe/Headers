@class NSString;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {
    NSString *_inputTensorName;
}

+ (BOOL)_adjustBoneLength:(void *)a0 count:(unsigned long long)a1;
+ (void)_transformRelativeToHip:(void *)a0 count:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)init;
- (double)requiredTimeInterval;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (unsigned long long)requiredSensorDataTypes;
- (void)changeEspressoConfig:(id)a0;
- (id)processEspressoTensor:(id)a0;

@end
