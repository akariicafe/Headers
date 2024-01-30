@protocol ABPK3DLiftingAlgorithm;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {
    id<ABPK3DLiftingAlgorithm> _liftingAlgorithm;
}

- (id)init;
- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_prepareOnce:(BOOL)a0;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)changeEspressoConfig:(id)a0;
- (id)processEspressoTensor:(id)a0;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;

@end
